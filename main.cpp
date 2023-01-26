#include "date.h"
#include "book.h"
#include "reader.h"
#include "loan.h"
#include "library.h"
#include "author.h"
#include <iostream>
using namespace std;

int main(){

    Library lib = Library();
    
    Author rowling = Author("J.K.", "rowling", 0001, Date(31, 07, 1965));
    Author camus = Author("Albert", "camus", 0002, Date(07, 11, 1913));
    Author hugo = Author("Victor", "hugo", 0003, Date(26, 02, 1802));
    Author proust = Author("Marcel", "proust", 0004, Date(10, 07, 1871));
    Author flaubert = Author("Gustave", "flaubert", 0005, Date(12, 12, 1821));

    lib.addAuthor(rowling);
    lib.addAuthor(camus);
    lib.addAuthor(hugo);
    lib.addAuthor(proust);
    lib.addAuthor(flaubert);

    Book harryPotter = Book("Harry Potter à l'école des sorciers", rowling, "English", "Fantasy", Date(26, 06, 1997), 0);
    Book animauxFantastiques = Book("Les Animaux fantastiques", rowling, "English", "Fantasy", Date(01, 03, 2001), 1);
    Book etranger = Book("L'Etranger", camus, "French", "Novel", Date(01, 01, 1942), 2);
    Book peste = Book("La Peste", camus, "French", "Novel", Date(10, 06, 1947), 3);
    Book miserables = Book("Les Misérables", hugo, "French", "Novel", Date(01, 01, 1862), 4);
    Book condamne = Book("Le Dernier Jour d'un condamné", hugo, "French", "Novel", Date(01, 02, 1829), 5);
    Book tempsPerdu = Book("A la recherche du temps perdu", proust, "French", "Novel", Date(01, 01, 1913), 6);
    Book swann = Book("Du côté de chez Swann", proust, "French", "Novel", Date(14, 11, 1913), 7);
    Book bovary = Book("Madame Bovary", flaubert, "French", "Novel", Date(15, 12, 1856), 8);

    lib.addBook(harryPotter);
    lib.addBook(animauxFantastiques);
    lib.addBook(etranger);
    lib.addBook(peste);
    lib.addBook(miserables);
    lib.addBook(condamne);
    lib.addBook(tempsPerdu);
    lib.addBook(swann);
    lib.addBook(bovary);

    Reader elsa = Reader("elsaa", "Elsa", "Allard", {});
    Reader juliette = Reader("julietteg", "Juliette", "Gagnepain", {});

    lib.addReader(elsa);
    lib.addReader(juliette);

    cout << "Elsa initial state : \n";
    cout << elsa;

    cout << "\nElsa borrows a book\n";
    lib.BorrowBook(elsa, swann);

    cout << "Elsa state : \n";
    cout << elsa;
    cout << "\nBook state : \n";
    cout << swann;

    cout << "\n\nElsa return the book\n";
    lib.ReturnBook(elsa, swann);

    cout << "Elsa state : \n";
    cout << elsa;
    cout << "\nBook state : \n";
    cout << swann;

    cout << "\n----------------------\n";


    lib.ListAllBooksOfAnAuthor(hugo);



    // ------------------------- T E S T S -------------------------


    // //Date class test
    // Date d(2022, 12, 1);
    // cout << d.month() << "\n";
    // d.updateDay(2);
    // cout << d.day() <<"\n";

    // //Book class test
    // book l("A brief history of time", authors), "English", "Popularization", Date(), 0001);
    // authorsa =  l.author();
    // a.updateLastName("Hawking");
    // cout << a.last_name() + "\n";
    // l.updateLanguage("French");
    // cout << l.language() << "\n";

    // //Reader class test
    // reader l("julietteg", "Gagnepain", "Juliette", {});
    // cout << l.id() << "\n";
    // l.updateIsbn(1);
    // for(int i = 0; i < l.isbn().size(); i++)
    // {
    //     cout << l.isbn()[i];
    // }

    //Loan class test
    // Emprunt e(Date(), 1, "julietteg");
    // cout << e.isbn() << "\n";
    // e.updateIdreader("Julietteg");
    // cout << e.id_reader();


    //Loan and return book test
    // Library lib = Library();
    // Author author("Hawking", "Stephen", 01, Date());
    // Book book("Titre", author, "English", "Popularization", Date(), 1234);
    // Reader reader("julietteg36", "Gagnepain", "Juliette", {});

    // lib.updateAuthors(author);
    // lib.updateReaders(reader);
    // lib.updateBooks(book);
    // cout << "Dispo du book avant emprunt : " << book.dispo() << "\n";
    // cout << "Liste Isbn du reader avant emprunt : ";
    // for(int i = 0; i < reader.isbn().size(); i++)
    // {
    //     cout << reader.isbn()[i];
    // }
    // cout << "\n";

    // lib.BorrowBook(reader, book);

    // cout << "Dispo du book après emprunt : " << book.dispo() << "\n";
    // cout << "Liste Isbn du reader après emprunt : ";
    // for(int i = 0; i < reader.isbn().size(); i++)
    // {
    //     cout << reader.isbn()[i];
    // }
    // cout << "\n";

    // ReturnBook(reader, book);

    // cout << "Dispo du book après restitution : " << book.dispo() << "\n";
    // cout << "Liste Isbn du reader après restitution : ";
    // for(int i = 0; i < reader.isbn().size(); i++)
    // {
    //     cout << reader.isbn()[i];
    // }
    // cout << "\n";
    
    // return 0;
}