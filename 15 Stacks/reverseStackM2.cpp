#include <iostream>
#include <stack>
using namespace std;
void insertAtbottom(stack<int> &st, int ele)
{
    // base case
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int topelement = st.top();
    st.pop();
    insertAtbottom(st, ele);
    st.push(topelement);
}
void reverseStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }
    int a = st.top();
    st.pop();
    reverseStack(st);
    insertAtbottom(st, a);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}