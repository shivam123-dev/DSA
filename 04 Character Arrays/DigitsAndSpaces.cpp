#include <iostream>
using namespace std;
int main()
{
    char ch;
    ch = cin.get();
    int alpha = 0;
    int space = 0;
    int digit = 0;
    while(ch!='\n'){
        if(ch>='0' and ch<='9'){
            digit++;
        }
        else if((ch>='A' and ch<='Z') || (ch>='a' and ch<='z')){
            alpha++;
        }
        else if(ch>=' ' and ch<='\t'){
            space++;
        }
        ch = cin.get();
    }
    cout << "Total Alphabets " << alpha << endl;
    cout << "Total Digits " << digit << endl;
    cout << "Total Spaces " << space << endl;
}