#include <iostream>
#include <cstring>
using namespace std;
// calculating the length of string
int len(char *s)
{
    return strlen(s);
}
// copying one string to another string
char *copy(char *s, char *q)
{
    strcpy(q, s);
    return q;
}
// comparing one string with another string
bool comp(char *s1, char *s2)
{
    if (strcmp(s1, s2) == 0)
    {
        return true;
    }
    return false;
}
// combining/concatinating two strings
char* combine(char *s1, char* s2){
    return strcat(s2, s1);
}
int main()
{
    char s1[1000] = "apple";
    char s2[1000] = "boy";
    char q[1000];
    cout << "The length of s1 and s2 strings respectively is: " << len(s1) << " and " << len(s2) << endl;
    cout << "Afer copying the s1 string to q, the q string becomes: " << copy(s1, q) << endl;
    if (comp(s1, s2))
    {
        cout << "s1 and s2 strings are same" << endl;
    }
    else
    {
        cout << "s1 and s2 strings are different" << endl;
    }
    cout << combine(s2, s1);
    return 0;
}