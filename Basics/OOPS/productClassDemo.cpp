#include <iostream>

using namespace std;

class Product{

    // by default, all the data in a class is private
    int id;
    char name[100];

    public:
        int mrp;
        int selling_price;

};

int main() {

    // creating an object of class 'Product'
    Product camera;

    // the class doesnt occupy any memory as it is just a map/blueprint
    // the object does occupy some memory
    cout<< sizeof(camera) <<endl;

    // we can read and write the data members which are public
    camera.mrp = 100;
    camera.selling_price = 200;

    // you can access data inside an object using the dot operator
    cout<< "MRP: "<< camera.mrp <<endl;
    cout<< "Selling Price: "<< camera.selling_price <<endl;


    return 0;
}