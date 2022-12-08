#include "date.h"
#include "livre.h"
#include "lecteur.h"
#include "emprunt.h"
#include "bibliotheque.h"
#include "auteur.h"
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

    //Test de l'umprunt d'un livre

    //Création des objets
    Bibliotheque bibli = Bibliotheque();
    Auteur auteur("Hawking", "Stephen", 01, Date());
    Livre livre("Titre", auteur, "English", "Popularization", Date(), 1234);
    Lecteur lecteur("julietteg36", "Gagnepain", "Juliette", {});

    //Ajout des objets dans la bibliothèque
    bibli.updateAuteurs(auteur);
    bibli.updateLecteurs(lecteur);
    bibli.updateLivres(livre);

    //Vérif des infos avant emprunt
    cout << "Dispo du livre avant emprunt : " << livre.dispo() << "\n";
    cout << "Liste Isbn du lecteur avant emprunt : ";
    for(int i = 0; i < lecteur.isbn().size(); i++)
    {
        cout << lecteur.isbn()[i];
    }
    cout << "\n";

    //Emprunt
    bibli.EmprunterLivre(lecteur, livre);

    //Modif des infos
    livre.updateDispo(false);
    lecteur.addIsbn(livre.isbn());

    //Vérif des infos après emprunt
    cout << "Dispo du livre après emprunt : " << livre.dispo() << "\n";
    cout << "Liste Isbn du lecteur après emprunt : ";
    for(int i = 0; i < lecteur.isbn().size(); i++)
    {
        cout << lecteur.isbn()[i];
    }
    cout << "\n";

    //Restitution
    bibli.RestituerLivre(lecteur, livre);

    //Vérif des infos après restitution
    cout << "Dispo du livre après restitution : " << livre.dispo() << "\n";
    cout << "Liste Isbn du lecteur après restitution : ";
    for(int i = 0; i < lecteur.isbn().size(); i++)
    {
        cout << lecteur.isbn()[i];
    }
    cout << "\n";


    return 0; 
}