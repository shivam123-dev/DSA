#include <iostream>
#include <cstring>
using namespace std;
class Product
{
    int id;
    char name[100];

public:
    // Parametrized Constructor
    Product(int id, char *name)
    {
        this->id = id;
        strcpy(this->name, name);
    }
    // Creating our own Copy Constructor
    Product(Product &X){
        id = X.id;
        strcpy(name, X.name);  
        // name = X.name;
    }
    void showDetails()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "--------------" << endl;
    }
};
int main()
{
    Product camera1(101, "Sony");
    Product camera2(camera1); // calling the copy constructor
    // Product camera3(camera1); // calling the copy constructor
    camera1.showDetails();
    camera2.showDetails();
    // camera3.showDetails();
    return 0;
}