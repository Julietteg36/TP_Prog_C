#include "client.h"

//Constructors
Client::Client(){
    this->_id = 0;
    this->_first_name = "";
    this->_last_name = "";
    this->_purchases = {};
}

Client::Client(int id, string first_name, string last_name, vector<Product> purchases){
    this->_id = id;
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_purchases = purchases;
}

//Guetters
int Client::id(){
    return this->_id;
}

string Client::first_name(){
    return this->_first_name;
}

string Client::last_name(){
    return this->_last_name;
}

vector<Product> Client::purchases(){
    return this->_purchases;
}

//Setteurs
void Client::updateId(int id){
    this->_id = id;
}

void Client::updateFirstName(string first_name){
    this->_first_name = first_name;
}

void Client::updateLastName(string last_name){
    this->_last_name = last_name;
}

void Client::addPurchase(Product product){
    this->_purchases.push_back(product);
}

void Client::deletePurchase(Product product){
    for (auto i = this->_purchases.begin(); i < this->_purchases.end(); i++) {
        if (product.id() == i->id()) {
            this->_purchases.erase(i);
        }
    }
}

void Client::clearPurchases(){
    this->_purchases.clear();
}

void Client::updateQuantityPurchase(Product product, int quantity){
    for(int i = 0; i < this->_purchases.size(); i++)
    {
        if(this->_purchases[i].id() == product.id())
        {
            product.updateQuantity(quantity);
        }
    }
}

