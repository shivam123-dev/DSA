#include<iostream>
#include<stack>
using namespace std;
bool balanced(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '[' or s[i] == '{' or s[i] == '('){
            st.push(s[i]);
        }
        else{
            if((s[i] == ']' and st.top() == '[') or (s[i] == '}' and st.top() == '{') or (s[i] == ')' and st.top() == '(')){
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "[{()}";
    if(balanced(s)){
        cout << "Balanced Paranthesis" << endl;
    }
    else{
        cout << "Unbalanced Paranthesis" << endl;
    }
    return 0;
}