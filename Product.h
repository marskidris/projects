//
// Created by Kolade Idris on
//


class Product {
    // data members are product price and total sales
private:
    double productPrice;
    double totalSales;
public:
    // establish the product class
    Product(double price) : productPrice(price), totalSales(0.0) {};
    // create setters and getters for the productPrice and totalSales
    void setPrice(double price){ productPrice = price;}
    double getPrice() const{return productPrice;}
    void setSales(double sales){totalSales = sales;}
    double getSales() const{return totalSales;}
    // update the total sales by getting the quan
    double updateTotalSales (double salesQuantity){
        double total = salesQuantity * productPrice;
        totalSales += total;
    }
    double getTotalSales() const{
        return totalSales;
    }
};
