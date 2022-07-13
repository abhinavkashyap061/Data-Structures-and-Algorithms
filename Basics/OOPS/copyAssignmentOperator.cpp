/*

    Copy Assignment Operator
    ========================

    - Assignment operator is called when an already intialized object is
      assigned a new value from another existing object.

    - we need to define our own copy constructor only if an object 
      has pointers to dynamically allocated objects i.e deep copy of object
      is needed.

*/

#include <bits/stdc++.h>

using namespace std;

class Product{

    int id;
    char *name;
    int mrp;
    int selling_price;

    public:
        Product(){

            cout<<"inside constructor"<<endl;
        }
        Product(int id, char *n, int mrp, int selling_price){
            this -> id = id;

            name = new char[strlen(n)+1];
            strcpy(name, n);
            
            this -> mrp = mrp;
            this -> selling_price = selling_price;

        }
        Product( Product &x ){

            cout<<"we are inside copy constructor"<<endl;

            // Deep copy inside assignment operator
            this -> id = x.id;

            name = new char[strlen(x.name)+1];
            strcpy(name, x.name);

            this -> mrp = x.mrp;
            this -> selling_price = selling_price;

        }

        void setMrp( int price ){
            if( price>0 ){

                mrp = price;
            }
        }
        void setSellingPrice( int price ){

            if( price<mrp){

                selling_price = price;
            }else{

                selling_price = mrp;
            }
        }
        void setName(char *n){

            strcpy(this -> name, n);
        }
        int getMrp(){

            return mrp;
        }
        int getSellingPrice(){

            return selling_price;
        }
        void showDetails(){
            cout<<"=================="<<endl;
            cout<<"ID: "<<this -> id<<endl;
            cout<<"Name: "<<this -> name<<endl;
            cout<<"MRP: "<<this -> mrp<<endl;
            cout<<"Selling Price: "<<this -> selling_price<<endl;
        }

        // making our own copy assignment operator
        void operator=(Product &x){

            cout<<"inside copy assignment operator"<<endl;

            this -> id = x.id;

            name = new char[strlen(x.name)+1];
            strcpy(name, x.name);

            this -> mrp = x.mrp;
            this -> selling_price = selling_price;
        }

};

int main() {

    Product camera(5, "GoProHero9", 28000, 26000);
    Product oldCamera(camera);

    oldCamera.setSellingPrice(6969);

    oldCamera = camera;

    // - copy assignment operator also creates a shallow copy
    // - if you change any data member in the object, it would 
    //   also reflect in parent object.
    oldCamera.setName("bruh");

    oldCamera.showDetails();
    camera.showDetails();

    return 0;
}