//
// Created by Kolade Idris
//
#include <iostream>
#include "Product.h"

using namespace std;

int main(){
    // first you have to instantiate five different products for the prices.
    Product product1(2.98);
    Product product2(4.50);
    Product product3(9.98);
    Product product4(4.29);
    Product product5(8.67);
    int number = 0;
    double sold = 0;
    // instructions to being sentinel controlled loop.
    cout << "Enter 1 to start the program and once finished enter 0 to exit: ";
    cin >> number;

    while (number != 0) {
        cout << "Product Number: (0 to exit): ";
        cin >> number;
        // if number is equal to 0 break else continue with the program!
        if (number == 0){
            break;
        } else {
            cout << "Quantity Sold: ";
            cin >> sold;
        }
        // switch case. if 1-5 update that specific product and value.
        switch (number) {
            case 1:
                product1.updateTotalSales(sold);
                break;
            case 2:
                product2.updateTotalSales(sold);
                break;
            case 3:
                product3.updateTotalSales(sold);
                break;
            case 4:
                product4.updateTotalSales(sold);
                break;
            case 5:
                product5.updateTotalSales(sold);
                break;
            default:
                cout << "Invalid Input. Enter 1 to continue or 0 to exit: ";
                break;
        }
    }
    // this is to call the total value. use each value and call for total sales.
    cout << "\n";
    cout << "Total Sales: " << endl;
    cout << "===== ======" << endl;
    cout << "Product 1: $" << product1.getTotalSales() << endl;
    cout << "Product 2: $" << product2.getTotalSales() << endl;
    cout << "Product 3: $" << product3.getTotalSales() << endl;
    cout << "Product 4: $" << product4.getTotalSales() << endl;
    cout << "Product 5: $" << product5.getTotalSales() << endl;
}
