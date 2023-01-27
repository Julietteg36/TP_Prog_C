#ifndef STORE_H
#define STORE_H

#include <iostream>
#include <string>
#include <vector>
#include "product.h"
#include "client.h"
#include "order.h"

using namespace std; 

class Store{

	public:
		//Constructor
		Store(vector<Product> products, vector<Client> clients, vector<Order> orders);
		//Guetters
		vector<Product> products();
        vector<Client> clients();
        vector<Order> orders();
		//Setteurs
        void addProduct(Product product);
        void removeProduct(Product product);
        void addClient(Client client);
        void removeClient(Client Client);
        void addOrder(Order order);
        void removeOrder(Order order);

        void productsDisplay();
        void displayProductByNameOrId(string productName, int productId);
        void clientsDisplay();
        void displayClientByNameOrId(string clientFirstName, string clientLastName, int clientId);
        void updateQuantityPurchaseOfAClient(Client client, Product product, int quantity);
        void updateQuantityProductByName(string productName, int quantity);
        void addProductToClientPurchases(Client client, Product product);
        void deleteProductToClientPurchases(Client client, Product product);
        Client findClient(string clientFirstName, string clientLastName);
        Product findProduct(Product product);
        void confirmOrder(Client client);
        void updateOrderStatus(bool status, int orderId);
        void ordersDisplay();
        void clientOrdersDisplay(Client client);

	private: 
		vector<Product> _products;
        vector<Client> _clients;
        vector<Order> _orders;
};

#endif