// Run Length Encoding Program:-
// Q) Return the compressed string and if the original string is smaller 
// than the compressed string then return the original string  

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string compressedString(string s)
{
    string output;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n and s[i] == s[i + 1])
        {
            i++;
            count++;
        }
        output += s[i];
        output += to_string(count);
    }
    if (output.length() > s.length())
    {
        return s;
    }
    return output;
}
int main()
{
    string s;
    getline(cin, s);
    cout << compressedString(s) << endl;
    return 0;
}