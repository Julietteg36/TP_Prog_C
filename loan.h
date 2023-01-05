#ifndef LOAN_H
#define LOAN_H

#include <iostream>
#include <string>
#include "date.h"

using namespace std; 

class Loan{
    public:
        //Constructors
        Loan();
        Loan(Date loan_date, int isbn, string reader_id);
        //Guetteurs
        Date loan_date();
        int isbn();
        string reader_id();
        //Setteurs
        void updateLoanDate(Date loan_date);
        void updateIsbn(int isbn);
        void updateReaderId(string reader_id);

    private:
        Date _loan_date;
        int _isbn; 
        string _reader_id;
};

#endif
