#include<iostream>
using namespace std;
class Product{
    int mrp;
    int id;
    int sp;
public:
    Product(){
        cout << "Inside default constructor" << endl;
    }
    Product(int id, int mrp, int sp){
        cout << "Inside parameterised constructor" << endl;
        this->id = id;
        this->mrp = mrp;
        this->sp = sp;
    }
    int setMrp(int price){
        if(price>0){
            mrp = price;
        }
    }
    int setSP(int price){
        if(price<=mrp){
            sp = price;
        }
        else{
            sp = mrp;
        }
    }
    int getMrp(){
        return mrp;
    }
    int getSP(){
        return sp;
    }
};
int main(){
    // Product camera;
    // camera.setMrp(100);
    // camera.setSP(80);
    Product camera(101, 100, 80);
    cout << camera.getMrp() << endl << camera.getSP() << endl;
    return 0;
}