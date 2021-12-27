#include <iostream>
#include <stack>
using namespace std;
stack<int> reverseStack(stack<int> st)
{
    stack<int> revSt;
    while (!st.empty())
    {
        revSt.push(st.top());
        st.pop();
    }
    return revSt;
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st = reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}