#include<iostream>
#include<cstring>
using namespace std;
class Product{
    char *name;
public:
    Product(char *n){
        name = new char[strlen(n)+1];
        strcpy(this->name, n);
    }
    // Destructor
    ~Product(){
        cout << "Deleting " << name << endl;
        if(name!=NULL){
            delete [] name;
            name = NULL;
        }
    }
};
int main(){
    Product cam("sony");

    return 0;
}