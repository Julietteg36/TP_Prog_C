#include "loan.h"

//Constructors
Loan::Loan(){
    this->_isbn = 0;
    this->_reader_id = "";
}

Loan::Loan(string reader_id, int isbn){
    this->_isbn = isbn;
    this->_reader_id = reader_id;
}

//Guetteurs
Date Loan::loan_date(){
    return this->_loan_date;
}

int Loan::isbn(){
    return this->_isbn;
}

string Loan::reader_id(){
    return this->_reader_id;
}

//Setteurs
void Loan::updateLoanDate(Date loan_date){
    this->_loan_date = loan_date;
}

void Loan::updateIsbn(int isbn){
    this->_isbn = isbn;
}

void Loan::updateReaderId(string reader_id){
    this->_reader_id = reader_id;
}