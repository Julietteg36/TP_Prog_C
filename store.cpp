#include "store.h"

//Constructor
Store::Store(vector<Product> products, vector<Client> clients, vector<Order> orders){
    this->_products = products;
    this->_clients = clients;
    this->_orders = orders;
}

//Guetters
vector<Product> Store::products(){
    return this->_products;
}

vector<Client> Store::clients(){
    return this->_clients;
}

vector<Order> Store::orders(){
    return this->_orders;
}

//Setteurs
void Store::addProduct(Product product){
    this->_products.push_back(product);
}
void Store::removeProduct(Product product){
}

void Store::addClient(Client client){
    this->_clients.push_back(client);
}

void Store::removeClient(Client client){

}
void Store::addOrder(Order order){
    this->_orders.push_back(order);
}

void Store::removeOrder(Order order){
}

void Store::productsDisplay(){
	cout << "All products of the store : \n";

	for(int i = 0; i < this->_products.size(); i++)
	{
		cout << this->_products[i].label() << " : " << this->_products[i].details() << " (" << this->_products[i].price() << " €)\n";
	}
}

void Store::displayProductByNameOrId(string productName, int productId){
	for(int i = 0; i < this->_products.size(); i++)
	{
		if(this->_products[i].label() == productName || this->_products[i].id() == productId)
		{
			cout << this->_products[i].label() << " : " << this->_products[i].details() << " (" << this->_products[i].price() << "€)\n";
		}
	}
}

void Store::clientsDisplay(){
	cout << "All clients of the store : \n";

	for(int i = 0; i < this->_clients.size(); i++)
	{
		cout << this->_clients[i].first_name() << " " << this->_clients[i].last_name() << "\n";
	}
}

void Store::displayClientByNameOrId(string clientFirstName, string clientLastName, int clientId){
	for(int i = 0; i < this->_clients.size(); i++)
	{
		if((this->_clients[i].first_name() == clientFirstName && this->_clients[i].last_name() == clientLastName) || this->_clients[i].id() == clientId)
		{
			cout << this->_clients[i].first_name() << " " << this->_clients[i].last_name() << "\n";
		}
	}
}

void Store::updateQuantityPurchaseOfAClient(Client client, Product product, int quantity){
	for(int i = 0; i < this->_clients.size(); i++)
	{
		if(this->_clients[i].id() == client.id())
		{
			for(int j = 0; j < this->_clients[i].purchases().size(); i++)
			{
				if(this->_clients[i].purchases()[i].id() == product.id())
				{
					this->_clients[i].purchases()[i].updateQuantity(quantity);
				}
			}
		}
	}
}

void Store::updateQuantityProductByName(string productName, int quantity){
	for(int i = 0; i < this->_products.size(); i++)
	{
		if(this->_products[i].label() == productName)
		{
			this->_products[i].updateQuantity(quantity);
		}
	}
}

void Store::addProductToClientPurchases(Client client, Product product){
	client.purchases().push_back(product);
}

void Store::deleteProductToClientPurchases(Client client, Product product){
	this->findClient(client.first_name(), client.last_name()).deletePurchase(this->findProduct(product));
}

Client Store::findClient(string clientFirstName, string clientLastName)
{	
	for (int i = 0; i < this->_clients.size(); i++) {
		if((this->_clients[i].first_name() == clientFirstName && this->_clients[i].last_name() == clientLastName)){
			return this->_clients[i];
		}
	}
}

Product Store::findProduct(Product product)
{	
	for (int i = 0; i < this->_products.size(); i++) {
		if((this->_products[i].id() == product.id())){
			return this->_products[i];
		}
	}
}

void Store::confirmOrder(Client client)
{
	Client clt = findClient(client.first_name(), client.last_name());
	if (clt.purchases().size() == 0){
        cout << "There is no product for this order" << "\n";
    }
    else
    {
		for(int i = 0; i < this->_products.size(); i++){
			for (int j = 0; j < clt.purchases().size(); j++){
				if (this->_products[i].id() == clt.purchases()[j].id()) {
					this->_products[i].updateQuantity((this->_products[i].quantity() - clt.purchases()[j].quantity()));
				}
			}

		}
		Order order = Order(0, clt, clt.purchases(), true);
		clt.purchases().clear();
        this->_orders.push_back(order);

		cout << "Order " << order.id() << " for client " << clt.id() << "confirmed \n";
	}
}

void Store::updateOrderStatus(bool status, int orderId)
{
	for(int i = 0; i < this->_orders.size(); i++){
		if (_orders[i].id() == orderId){
			_orders[i].updateConfirmed(status);
		}
	}
}

void Store::ordersDisplay(){
	cout << "All orders for the store : \n";
	for(int i = 0; i < this->_orders.size(); i++)
	{
		cout << "Client : " << this->_orders[i].client().first_name() << " " << this->_orders[i].client().last_name() << "   Purchases :\n";
		for(Product product : this->_orders[i].client().purchases())
		{
			cout << product << "\n";
		}
	}
}

void Store::clientOrdersDisplay(Client client){
	cout << "All orders from " << client.first_name() << " " << client.last_name() << " :\n";
	for(int i = 0; i < this->_orders.size(); i++)
	{
		if(this->_orders[i].client().id() == client.id())
		{
			for(int i = 0; i < this->_orders[i].client().purchases().size(); i++)
			{
				cout << this->_orders[i].products()[i];
			}
			
		}
	}
}