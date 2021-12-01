// Given a sentence count the number of alphabets, spaces and digits
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int digiCount = 0, spaceCount=0, letterCount=0;
    char temp = cin.get();
    while(temp!='\n'){
        if(temp >= 48 and temp <= 57){
            digiCount++;
        }
        else if(temp == 32){
            spaceCount++;
        }
        else if((temp>='a' and temp <='z) and (temp>='A' and temp <= 'Z')){
            letterCount++;
        }
        temp = cin.get();
    }
    cout << "The number of digits: " << digiCount << endl;
    cout << "The number of letters: " << letterCount << endl;
    cout << "The number of spaces: " << spaceCount << endl;
    return 0;
}
