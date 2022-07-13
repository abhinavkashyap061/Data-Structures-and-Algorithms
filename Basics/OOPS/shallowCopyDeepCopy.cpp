/*

    Why define Copy Constructor?
    ============================

    - the compiler created copy constructor works fine for most ofthe cases.

    - we need to define our own copy constructor only if an object 
      has pointers to dynamically allocated objects i.e deep copy of object
      is needed.

*/

#include <bits/stdc++.h>

using namespace std;

class Product{

    int id;
    // char name[100];
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
            this -> id = x.id;

            // shallow copy copies the address while creating a copy object.
            // it copies the address pointing to the same array in heap memory.
            // strcpy(name, x.name);
            // below, we are doing deep copy
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

};

int main() {

    Product camera(5, "GoProHero9", 28000, 26000);
    Product oldCamera(camera);
    oldCamera.setName("bruh");

    camera.showDetails();
    oldCamera.showDetails();

    // Product webcam(camera);
    // webcam.showDetails();

    // Product handyCam = camera;
    // handyCam.showDetails();

    return 0;
}