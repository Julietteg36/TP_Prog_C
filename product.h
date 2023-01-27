#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std; 

class Product{

	public:
		//Constructor
		Product(int id, string label, string details, int quantity, float price);
		Product(const Product &product);
		//Guetters
		int id();
		string label();
		string details();
		int quantity();
		float price();
		//Setteurs
		void updateId(int id);
		void updateLabel(string label);
		void updateDetails(string details);
		void updateQuantity(int quantity);
		void updatePrice(int price);
		//Surcharge de l'opérateur <<
		friend ostream& operator<<(std::ostream& os, Product& product);

	private: 
		int _id;
		string _label;
		string _details; 
		int _quantity; 
		float _price;
};

inline ostream& operator<<(ostream& os, Product& product)
{
    os << product.label() << " (id : " << product.id() << ") : " << product.details() << "\n";
    os << "Price : " << product.price() << "\n";
    os << "Quantity : " << product.quantity() << "\n";
    return os;
}

#endif