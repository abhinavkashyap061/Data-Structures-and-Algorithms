/*

    Copy Constructor
    ================

    - creates a copy of given object.
    - initialises an object using another object of the same class.
    - Syntax:

        class_name ne_object_name(const class_name &object_name);

        Eg: Product webcam(camera);

*/

#include <iostream>

using namespace std;

class Product{

    int id;
    string name;
    int mrp;
    int selling_price;

    public:
        Product(){

            cout<<"inside constructor"<<endl;
        }
        Product(int id, string n, int mrp, int selling_price){
            this -> id = id;
            this -> name = n;
            this -> mrp = mrp;
            this -> selling_price = selling_price;

        }

        // modifying the copy constructor
        Product( Product &x ){

            // now we have to manually code the copy constructor
            cout<<"we are inside copy constructor"<<endl;
            this -> id = x.id;
            this -> name = x.name;
            this -> mrp = x.mrp;
            this -> selling_price = selling_price;

        }

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
        void showDetails(){
            cout<<"ID: "<<this -> id<<endl;
            cout<<"Name: "<<this -> name<<endl;
            cout<<"MRP: "<<this -> mrp<<endl;
            cout<<"Selling Price: "<<this -> selling_price<<endl;
        }

};

int main() {

    Product camera(5, "GoProHero9", 28000, 26000);

    // Copy is made using a special constructor i.e Copy constructor which is present by default.
    Product webcam(camera);
    webcam.showDetails();

    // you can also call the copy constructor in this way
    Product handyCam = camera;
    handyCam.showDetails();

    return 0;
}