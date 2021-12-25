#include<iostream>
#include<cstring>
using namespace std;
class Product{
    char *name;
public:
    // constructor
    Product(char *name){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    // Shallow Copy Constructor
    Product(Product &x){
        name = x.name;
    }
    
    // Deep Copy Constructor
    Product(Product &x){
        name = x.name;
    }
    void setName(char *n){
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    void showDetails(){
        cout << name << endl;
        cout << "------------" << endl;
    }
};
int main(){
    Product camera1("Sony");
    
    // Call either shallow copy constructor or deep copy constructor
    // Note:- Its always best to use deep copy constructor instead of shallow copy constructor

    // calling shallow copy constructor
    Product camera2(camera1);
    
    // calling deep copy constructor
    Product camera2(camera1);
    camera2.setName("Hassleblad");

    // Printing the details
    camera1.showDetails();
    camera2.showDetails();
    return 0;
}