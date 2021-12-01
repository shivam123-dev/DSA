// Problem: - Read N strings and print the largest string. Each string can have upto 1000 characters.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int N, len = 0, temp = 0;
    cin >> N;
    cin.get(); // for consuming the '\n' or ' ' character which is inserted
               // just after giving the value of N
    char s1[1000], s2[1000];
    while (N > 0)
    {
        cin.getline(s1, 1000);
        len = strlen(s1);
        if (temp < len)
        {
            temp = max(temp, len);
            strcpy(s2, s1);
        }
        N--;
    }
    cout << "The largest string is: " << s2 << endl;
    return 0;
}