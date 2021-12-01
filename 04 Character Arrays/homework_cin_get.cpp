#include <iostream>
using namespace std;
int main()
{
    char sentence[100];
    int len = 0;
    char temp = cin.get();
    while (temp != '\n')
    {
        sentence[len] = temp;
        len++;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << sentence << endl;
    cout << "Length : " << len << endl;
    return 0;
}