// String Class
#include <iostream>
#include <string> // header file to include string class
#include <vector> // header file to include vector
using namespace std;
int main()
{
    // Ways to take input using string class
    // Method 1:-
    string s1;
    getline(cin, s1); // takes the input
    // Method 2:-
    string s2 = "I love coding";
    // Method 3:-
    string s3("Hello World");
    cout << s1 << " " << s2 << " " << s3 << endl;

    // By default the getline function terminates at '\n'. We can also change this delimiter as follows:-
    string s4;
    getline(cin, s4, '.');
    cout << s4 << endl;

    // Printing every character of the string s1
    // for (char ch: s2)
    // {
    //     cout << ch << ", ";
    // }
    // cout << endl;

    // Vector of strings
    vector<string> sarr;
    string temp;
    getline(cin, temp);
    sarr.push_back(temp);
    // for (string x: sarr)
    // {
    //     cout << x << ", ";
    //     i++;
    // }
    cout << endl;
    return 0;
}