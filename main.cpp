#include "date.h"
#include "livre.h"
#include <iostream>
using namespace std;

int main(){

    // //Test classe Date
    // Date d(2022, 12, 1);
    // cout << d.month() << "\n";
    // d.updateDay(2);
    // cout << d.day() <<"\n";

    //Test classe Livre
    Livre l("A brief history of time", "Stephen Hawking", "English", "Popularization", Date(), 0001);
    cout << l.author() << "\n";
    l.updateLanguage("French");
    cout << l.language() << "\n";

    return 0;
}