
/*

    Why Getters and Setters?
    ========================

    - Getters and Setters are more powerful than just making data members public and then read/write them.
    - We can add additional checks in setters/getters.

*/

#include <iostream>

using namespace std;

class Product{

    int id;
    char name[100];
    int mrp;
    int selling_price;

    public:
        // Setters
        void setMrp( int price ){

            // additional check
            // negative MRP not allowed
            if( price>0 ){

                mrp = price;
            }
        }

        void setSellingPrice( int price ){

            // additional check
            if( price>mrp){

                selling_price = price;
            }else{

                selling_price = mrp;
            }
        }

        // Getters
        int getMrp(){

            return mrp;
        }

        int getSellingPrice(){

            return selling_price;
        }

};

int main() {

    Product camera;

    camera.setMrp(100);
    camera.setSellingPrice(200);

    cout<<"MRP: "<<camera.getMrp()<<endl;
    cout<<"Selling Price: "<<camera.getSellingPrice()<<endl;


    return 0;
}