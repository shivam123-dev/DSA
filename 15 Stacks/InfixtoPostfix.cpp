#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;
int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' or c == '/')
    {
        return 2;
    }
    else if (c == '-' or c == '+')
    {
        return 1;
    }
    return -1;
}
string convert(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() and st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() and prec(st.top()) > prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s = "(a-b/k)*(a-l/k)";
    cout << convert(s) << endl;
    return 0;
}