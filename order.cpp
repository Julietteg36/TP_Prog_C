#include "order.h"

//Constructor
Order::Order(int id, Client client, vector<Product> products, bool confirmed){
    this->_id = id;
    this->_client = client;
    this->_confirmed = confirmed;

}

//Guetters
int Order::id(){
    return this->_id;
}

Client Order::client(){
    return this->_client;
}

vector<int> Order::products(){
    return this->_products;
}

bool Order::confirmed(){
    return this->_confirmed;
}

//Setteurs
void Order::updateId(int id){
    this->_id = id;
}

void Order::updateClient(Client client){
    this->_client = client;
}

void Order::updateProducts(vector<int> products){
    this->_products = products;
}

void Order::updateConfirmed(bool confirmed){
    this->_confirmed= confirmed;
}