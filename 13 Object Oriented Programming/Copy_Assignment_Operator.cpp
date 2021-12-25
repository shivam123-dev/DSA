#include<iostream>
#include<cstring>
using namespace std;
class Product{
    int id;
    char* name;
    int price;
public:
    Product(char* n){
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    // show details
    void showDetails(){
        cout << "Name: " << name << endl; 
        cout << "-------------" << endl;
    }
    // copy assignment operator
    void operator=(Product &x){
        name = new char [strlen(x.name)+1];
        strcpy(name, x.name);
    }
};
int main(){
    Product camera1("Sony");
    Product camera2 = camera1;
    camera1.showDetails();
    camera2.showDetails();
    return 0;
}