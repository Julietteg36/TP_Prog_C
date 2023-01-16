#include "library.h"

using namespace std;

//Constructors
Library::Library(){
    this->_authors = {};
    this->_readers = {};
    this->_books = {};
}
Library::Library(vector <Book> books, vector <Author> authors, vector <Reader> readers, vector <Loan> loans){
    this->_authors = authors;
    this->_readers = readers;
    this->_books = books;
    this->_loans = loans;
}

//Guetters 
vector <Book> Library::books(){
    return this->_books;
}

vector <Author> Library::authors(){
    return this->_authors;
}

vector <Reader> Library::readers(){
    this->_readers;
}

vector <Loan> Library::loans(){
    this->_loans;
}

//Setteurs
void Library::updateBooks(Book book){
    this->_books.push_back(book);
}

void Library::updateAuthors(Author author){
    this->_authors.push_back(author);
}

void Library::updateReaders(Reader reader){
    this->_readers.push_back(reader);
}

void Library::addLoan(Loan loan){
    this->_loans.push_back(loan);
}

void Library::BorrowBook(Reader &reader, Book &book, Date &date){
    if(book.dispo() == false)
    {
        cout << "This book is currently borrowed \n";
    }
    else
    {
        Loan loan = Loan(date, book.isbn(), reader.id());
        this->addLoan(loan);
        book.updateDispo(false);
        reader.addIsbn(book.isbn());
    }
}

void Library::deleteLoan(Book book){
    auto it = find_if(this->loans().begin(), this->loans().end(), [&book](Loan &loan) {return loan.isbn() == book.isbn(); });

    if(it != this->_loans.end())
    {
        auto index = distance(this->_loans.begin(), it);
        auto elementRemove = this->_loans.begin() + index;
        this->_loans.erase(elementRemove);
    }
}

void Library::ReturnBook(Reader &reader, Book &book){
    if(book.dispo() == true)
    {
        cout << "You can't return a book which is not currently borrowed \n";
    }
    else
    {
        deleteLoan(book);
        book.updateDispo(true);
        cout << book.title() << "has been returned \n";
    }
}

vector <Book> Library::ListAllBooksOfAnAuthor(Author author){
    cout << "All books of " << author.first_name() << " " << author.last_name() << "\n";

    for(int i = 0; i < this->_books.size(); i++)
    {
        if(author.last_name() == this->_books[i].author().last_name())
        {
            cout << this->_books[i] << "\n";
        }

    }
}

void Library::allBooksBorrowedByAReader(Reader reader){
    cout << "All books borrowed by " << reader.first_name() << " " << reader.last_name() << "\n";

    for(int i = 0; i < this->_loans.size(); i++)
    {
        if(this->_loans[i].reader_id() == reader.id())
        {
            for(int i = 0; i < this->_books.size(); i++)
            {
                if(this->_loans[i].isbn() == this->_books[i].isbn())
                {
                    cout << this->_books[i] << "\n";
                }
            }
        }
    }
}

void Library::percentageOfBorrowedBooks()
{
    double percentage = 0;
    for (int i = 0; i < this->_books.size() ; i++){
        if(this->_books[i].dispo() == false){
            percentage ++;
        }
    }

    cout << "Percentage of borrowed books : " <<(percentage * 100) / this->_books.size() << "%" << "\n";
}

void Library::readersRanking(){
    cout << "Readers' ranking : \n";
    vector<Reader> ranking = this->_readers;

    sort(ranking.begin(), ranking.end(), [](Reader reader1, Reader reader2){
        return reader1.isbn().size() > reader2.isbn().size();
    });

    for(auto reader : ranking)
    {
        cout << reader << "\n";
    }
}
		
