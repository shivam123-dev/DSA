#include <iostream>
using namespace std;
int main()
{
    char s[1000];
    cin.getline(s, 1000);

    // keeping the pointer originally at the origin
    int x = 0, y = 0;

    // calculating the effective number of x and y
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    // Number of x and y
    cout << "The number of x and y is: " << x << " and " << y << endl;
    // For first quadrant
    if (x >= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }
    // cout << endl;
    // // For second quadrant
    else if (x <= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x++)
        {
            cout << "W";
        }
    }
    // cout << endl;
    // For third quadrant
    else if (x <= 0 and y <= 0)
    {
        while (y++)
        {
            cout << "S";
        }
        while (x++)
        {
            cout << "W";
        }
    }
    // cout << endl;
    // For fourth quadrant
    else if (x >= 0 and y <= 0)
    {
        while (y++)
        {
            cout << "S";
        }
        while (x--)
        {
            cout << "E";
        }
    }
    else if(x==0 and y==0){
        cout << "The pointer origin";
    }
    cout << endl;
    return 0;
}