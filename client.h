#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <vector>

#include "product.h"

using namespace std; 

class Client{

	public:
		//Constructors
        Client();
		Client(int id, string first_name, string last_name, vector<Product> purchases);
		//Guetters
		int id();
		string first_name();
		string last_name();
		vector<Product> purchases();
		//Setteurs
		void updateId(int id);
		void updateFirstName(string first_name);
		void updateLastName(string last_name);
        void addPurchase(Product product);
		void deletePurchase(Product product);
        void clearPurchases();
		void updateQuantityPurchase(Product product, int quantity);
		//Surcharge de l'opérateur <<
		friend ostream& operator<<(std::ostream& os, Client& client);

	private: 
		int _id;
		string _first_name;
        string _last_name;
        vector<Product> _purchases;
};

inline ostream& operator<<(ostream& os, Client& client)
{
    os << client.first_name() << " " << client.last_name() << " (id : " << client.id() << ") : " << "   Purchases :\n";
    for(int i = 0; i < client.purchases().size(); i++)
	{
		os << client.purchases()[i];
	}
    return os;
}

#endif