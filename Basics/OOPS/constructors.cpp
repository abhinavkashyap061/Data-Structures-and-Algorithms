#include <iostream>

using namespace std;

class Product{

    int id;
    char name[100];
    int mrp;
    int selling_price;

    public:
        // Constructor
        // - it is a hidden method of a class which has name of the class itself.
        // - it is automatically called when we create any instance of the class/object. 
        // - for each object, it can only be called once.
        Product(){

            cout<<"inside constructor"<<endl;
        }
        // Parameterised constructor
        Product(int id, char *n, int mrp, int selling_price){

            // 'this' is a hidden property of a class.
            // - It is a pointer which points to the address of current object / instance of class.
            // this -> id = id; || (*this).id = id;
            // you can use arrow notation or deference and then use dot operator while using 'this'.
            this -> id = id;
            strcpy(name, n);
            this -> mrp = mrp;
            this -> selling_price = selling_price;

        }
        // we did constructor overloading above i.e two constructors with same name but different parameters
        // but only one of them will execute when called with right arguments

        void setMrp( int price ){
            if( price>0 ){

                mrp = price;
            }
        }
        void setSellingPrice( int price ){

            if( price>mrp){

                selling_price = price;
            }else{

                selling_price = mrp;
            }
        }
        int getMrp(){

            return mrp;
        }
        int getSellingPrice(){

            return selling_price;
        }

};

int main() {

    // Product camera;

    // camera.setMrp(100);
    // camera.setSellingPrice(200);

    // cout<<"MRP: "<<camera.getMrp()<<endl;
    // cout<<"Selling Price: "<<camera.getSellingPrice()<<endl;

    Product camera(5, "GoProHero9", 28000, 26000);
    cout<<"MRP: "<<camera.getMrp()<<endl;
    cout<<"Selling Price: "<<camera.getSellingPrice()<<endl;



    return 0;
}