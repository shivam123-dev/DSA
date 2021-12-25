#include <iostream>
using namespace std;

class Product
{
    int mrp;
    int selling_price;

public:
    // setters
    int setMRP(int price)
    {
        if (price > 0)
        {
            mrp = price;
        }
    }
    int setSP(int price)
    {
        if (price <= mrp)
        {
            selling_price = price;
        }
        else
        {
            selling_price = mrp;
        }
    }
    // getters
    int getMRP()
    {
        return mrp;
    }
    int getSP()
    {
        return selling_price;
    }
};
int main()
{
    Product camera;
    // camera.setMRP(100);
    // camera.setMRP(-100);   // does not work
    camera.setMRP(100);
    // camera.setSP(200);     // does not work
    camera.setSP(80);
    cout << camera.getMRP() << endl
         << camera.getSP() << endl;
    return 0;
}