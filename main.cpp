#include "client.h"
#include "order.h"
#include "product.h"
#include "store.h"
#include <iostream>
using namespace std;



int main(){
    Store store = Store({}, {}, {});
    Product product1 = Product(1, "PS4", "Console de jeu Sony", 5, 250.00);
    Product product2 = Product(2, "Le réveil de la Force", "Septième film de la série Star Wars", 8, 10.00);
    Client client = Client(1, "Juliette", "Gagnepain", {});
    store.addProduct(product1);
    store.addProduct(product2);
    store.addClient(client);

    //Menu
    int choice = 0;

    cout << "                                EasyStore --- Welcome !\n\n\n";
    cout << "1 - Store\n";
    cout << "2 - Clients\n";
    cout << "3 - Orders\n\n";
    cin >> choice;

    //Gestion des produits du magasin
    if(choice == 1)
    {
        cout << "   1 - Display all products\n";
        cout << "   2 - Add a product\n";
        cout << "   3 - Search a product\n";
        cout << "   4 - Update quantity of a product\n";
        cout << "   5 - Back\n";
        cin >> choice;

        if(choice == 1)
        {
            store.productsDisplay();
        }
        else if(choice == 2)
        {
            int id;
            string label;
            string details; 
            int quantity; 
            float price;

            cout << "Label : ";
            cin >> label;
            cout << "\nId : ";
            cin >> id;
            cout <<"\nDetails : ";
            cin >> details;
            cout <<"\nPrice : ";
            cin >> price;
            cout <<"\nQuantity : ";
            cin >> quantity;

            Product product = Product(id, label, details, quantity, price);
            store.addProduct(product);
        }
        else if(choice == 3)
        {
            string productName;
            int productId;

            cout << "Name of the product : ";
            cin >> productName;
            cout <<"\nId of the product : ";
            cin >> productId;
            cout << "\n";

            store.displayProductByNameOrId(productName, productId);
        }
        else if(choice == 4)
        {
            string productName;
            int newQuantity;
            cout << "Name of the product : ";
            cin >> productName;
            cout << "\nNew quantity :";
            cin >> newQuantity;
            cout << "\n";

            store.updateQuantityProductByName(productName, newQuantity);
        }
        else if(choice == 5)
        {
            cout.clear();
        }
    }

    //Gestion des clients
    else if(choice == 2)
    {
        cout << "   1 - Display all clients\n";
        cout << "   2 - Add a client\n";
        cout << "   3 - Search a client\n";
        cout << "   4 - Back\n";
    cin >> choice;

        if(choice == 1)
        {
            store.clientsDisplay();
        }
        else if(choice == 2)
        {
           int id;
            string first_name;
            string last_name;

            cout << "First name : ";
            cin >> first_name;
            cout << "\nLast name : ";
            cin >> last_name;
            cout <<"\nId : ";
            cin >> id;

            Client client = Client(id, first_name, last_name, {});
            store.addClient(client);
        }
        else if(choice == 3)
        {
            string clientFirstName;
            string clientLastName;
            int clientId;

            cout << "First name of the client : ";
            cin >> clientFirstName;
            cout << "\nLast name of the client : ";
            cin >> clientLastName;
            cout << "\nId of the client : ";
            cin >> clientId;
            cout << "\n";
            store.displayClientByNameOrId(clientFirstName, clientLastName, clientId);
        }
        else if(choice == 4)
        {
            cout.clear();
        }

        //Gestion des clients
        else if(choice == 3)
        {
            cout << "   1 - Display all orders\n";
            cout << "   2 - Confirm an order\n";
            cout << "   3 - Update order status\n";
            cout << "   4 - Back\n";
        cin >> choice;

            if(choice == 1)
            {
                store.ordersDisplay();
            }
            else if(choice == 2)
            {
                string clientFirstName;
                string clientLastName;

                store.confirmOrder(store.findClient(clientFirstName, clientLastName));
            }
            else if(choice == 3)
            {
                bool status;
                int idOrder;

                cout << "New status : ";
                cin >> status;
                cout << "\nOrder Id :";
                cin >> idOrder;
                store.updateOrderStatus(status, idOrder);
            }
            else if(choice == 4)
            {
                cout.clear();
            }
        }
    }      
}