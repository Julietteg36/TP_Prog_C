#include "date.h"
#include <iostream>
using namespace std;

int main(){

    //Création d'une date
    Date d(2022, 12, 1);
    d.month();
    d.updateDay(2);
    d.day();

    return 0;
}