// Product Inventory

#include <bits/stdc++.h>
using namespace std;

class product{
    private:
        int price,stock;
    public:
        string product_name,category;
    product(string p,string c) {
        product_name=p;
        category=c;
    }
    void set(int val,int st) {
        price=val;
        stock=st;
    }
    void get() {
        cout << "Price : " << price << endl << "Stock : " << stock << endl;
    }
    void product_details() {
        cout << "Product Details\n" << "Product Name : " << product_name << endl << "Category : " << category << endl << "Price : "
        << price << endl << "Stock : " << stock << endl;
    }
};
int main() {
    product p("Laptop","Electronics");
    p.set(60000,100);
    p.get();
    p.product_details();
}