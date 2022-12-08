#include "date.h"
#include "livre.h"
#include "lecteur.h"
#include "emprunt.h"
#include <iostream>
using namespace std;

int main(){

    // //Test classe Date
    // Date d(2022, 12, 1);
    // cout << d.month() << "\n";
    // d.updateDay(2);
    // cout << d.day() <<"\n";

    // //Test classe Livre
    // Livre l("A brief history of time", Auteur(), "English", "Popularization", Date(), 0001);
    // Auteur a =  l.author();
    // a.updateLastName("Hawking");
    // cout << a.last_name() + "\n";
    // l.updateLanguage("French");
    // cout << l.language() << "\n";

    // //Test classe Lecteur
    // Lecteur l("julietteg", "Gagnepain", "Juliette", {});
    // cout << l.id() << "\n";
    // l.updateIsbn(1);
    // for(int i = 0; i < l.isbn().size(); i++)
    // {
    //     cout << l.isbn()[i];
    // }

    //Test classe Emprunt
    // Emprunt e(Date(), 1, "julietteg");
    // cout << e.isbn() << "\n";
    // e.updateIdLecteur("Julietteg");
    // cout << e.id_lecteur();

    return 0;

    
}