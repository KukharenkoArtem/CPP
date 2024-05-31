#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class ShopItemOrder {
private:
    string itemName;
    double unitPrice;
    int quantity;

public:
    ShopItemOrder(const string& name = "", double price = 0.0, int qty = 1)
        : itemName(name), unitPrice(price), quantity(qty) {}

    string getItemName() const { return itemName; }
    double getUnitPrice() const { return unitPrice; }
    int getQuantity() const { return quantity; }

    void setItemName(const string& name) { itemName = name; }
    void setUnitPrice(double price) { unitPrice = price; }
    void setQuantity(int qty) { quantity = (qty > 0) ? qty : 1; }

    double getTotalPrice() const { return unitPrice * quantity; }

    void printOrder() const {
        cout << "Item Name: " << itemName << endl;
        cout << "Unit Price: $" << fixed << setprecision(2) << unitPrice << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << fixed << setprecision(2) << getTotalPrice() << endl;
    }
};

int main() {
    ShopItemOrder order1("T-Shirt", 19.99, 2);
    order1.printOrder();                     

    ShopItemOrder order2;                      
    order2.setItemName("Coffee Mug");
    order2.setUnitPrice(8.50);
    order2.setQuantity(1);
    order2.printOrder();                      

    return 0;
}
