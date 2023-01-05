#include "date.h"
#include "book.h"
#include "reader.h"
#include "loan.h"
#include "library.h"
#include "author.h"
#include <iostream>
using namespace std;

//Rechercher un book dans la libothèque
int rechercherbook(vector<Book> books, Book &book){
    int index = 0;
    for(int i = 0; i < books.size(); i++)
    {
        if(books[i].title() == book.title())
        {
            index = 1;
        }
    }
    return index;
}

//Rechercher un isbn dans la liste des isbn du reader
int rechercherIsbnbook(vector<int> list, int id){
    int index = 0;
    for(int i = 0; i < list.size(); i++)
    {
        if(list[i] == id)
        {
            index = i;
        }
    }
    return index;
}

void BorrowBook(Library &lib, Reader &reader, Book &book){
    //Si le book se trouve dans la liste de books de la libothèque
    if(rechercherbook(lib.books(), book) != 0)
    {
        //Si le book est disponible
        if(book.dispo() == true)
        { 
            book.updateDispo(false);
            reader.addIsbn(book.isbn());
            Loan emprunt(Date(), book.isbn(), reader.id());
        }
    }
}

void ReturnBook(Reader &reader, Book &book){
    book.updateDispo(true);
    reader.isbn().erase(reader.isbn().begin() + rechercherIsbnbook(reader.isbn(), book.isbn()));
    vector <int> listIsbn;

    for(int i = 0; i <= reader.isbn().size(); i++){
        listIsbn[i] = reader.isbn()[i];
    }

    reader.clearIsbn();

    for(int i = 0; i <= listIsbn.size(); i++){
        reader.addIsbn(listIsbn[i]);
    }
}

int main(){

    // //Test classe Date
    // Date d(2022, 12, 1);
    // cout << d.month() << "\n";
    // d.updateDay(2);
    // cout << d.day() <<"\n";

    // //Test classe book
    // book l("A brief history of time", authors), "English", "Popularization", Date(), 0001);
    // authorsa =  l.author();
    // a.updateLastName("Hawking");
    // cout << a.last_name() + "\n";
    // l.updateLanguage("French");
    // cout << l.language() << "\n";

    // //Test classe reader
    // reader l("julietteg", "Gagnepain", "Juliette", {});
    // cout << l.id() << "\n";
    // l.updateIsbn(1);
    // for(int i = 0; i < l.isbn().size(); i++)
    // {
    //     cout << l.isbn()[i];
    // }

    //Test classe Emprunt
    // Emprunt e(Date(), 1, "julietteg");
    // cout << e.isbn() << "\n";
    // e.updateIdreader("Julietteg");
    // cout << e.id_reader();


    //Test de l'umprunt et de la restitution d'un book

    //Création des objets
    Library lib = Library();
    Author author("Hawking", "Stephen", 01, Date());
    Book book("Titre", author, "English", "Popularization", Date(), 1234);
    Reader reader("julietteg36", "Gagnepain", "Juliette", {});

    //Ajout des objets dans la libothèque
    lib.updateAuthors(author);
    lib.updateReaders(reader);
    lib.updateBooks(book);

    //Vérif des infos avant emprunt
    cout << "Dispo du book avant emprunt : " << book.dispo() << "\n";
    cout << "Liste Isbn du reader avant emprunt : ";
    for(int i = 0; i < reader.isbn().size(); i++)
    {
        cout << reader.isbn()[i];
    }
    cout << "\n";

    //Emprunt
    BorrowBook(lib, reader, book);

    //Vérif des infos après emprunt
    cout << "Dispo du book après emprunt : " << book.dispo() << "\n";
    cout << "Liste Isbn du reader après emprunt : ";
    for(int i = 0; i < reader.isbn().size(); i++)
    {
        cout << reader.isbn()[i];
    }
    cout << "\n";

    //Restitution
    ReturnBook(reader, book);

    cout.flush();

    //Vérif des infos après restitution
    cout << "Dispo du book après restitution : " << book.dispo() << "\n";
    cout << "Liste Isbn du reader après restitution : ";
    for(int i = 0; i < reader.isbn().size(); i++)
    {
        cout << reader.isbn()[i];
    }
    cout << "\n";
    
    return 0;


    //Utilisation de la classe libothèque

    Library lib = Library();
    
    Author rowling = Author("J.K.", "Rowling", 0001, Date(31, 07, 1965));
    Author camus = Author("Albert", "Camus", 0002, Date(07, 11, 1913));
    Author hugo = Author("Victor", "Hugo", 0003, Date(26, 02, 1802));
    Author proust = Author("Marcel", "Proust", 0004, Date(10, 07, 1871));
    Author flaubert = Author("Gustave", "Flaubert", 0005, Date(12, 12, 1821));

    Book harryPotter = Book("Harry Potter à l'école des sorciers", rowling, "English", "Fantasy", Date(26, 06, 1997), 0);
    Book animauxFantastiques = Book("Les Animaux fantastiques", rowling, "English", "Fantasy", Date(01, 03, 2001), 1);
    Book etranger = Book("L'Etranger", camus, "French", "Novel", Date(01, 01, 1942), 2);
    Book peste = Book("La Peste", camus, "French", "Novel", Date(10, 06, 1947), 3);
    Book miserables = Book("Les Misérables", hugo, "French", "Novel", Date(01, 01, 1862), 4);
    Book condamne = Book("Le Dernier Jour d'un condamné", hugo, "French", "Novel", Date(01, 02, 1829), 5);
    Book tempsPerdu = Book("A la recherche du temps perdu", proust, "French", "Novel", Date(01, 01, 1913), 6);
    Book swann = Book("Du côté de chez Swann", proust, "French", "Novel", Date(14, 11, 1913), 7);
    Book bovary = Book("Madame Bovary", flaubert, "French", "Novel", Date(15, 12, 1856), 8);

    Reader elsa = Reader("elsaa", "Elsa", "Allard", {});
    Reader juliette = Reader("julietteg", "Juliette", "Gagnepain", {});

}