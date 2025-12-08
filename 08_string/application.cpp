
#include <iostream>
#include <string>
using namespace std;
//goal is to change any english alphabet from the phone number into the correct numbers
int main()
{
    string phone_number;
    getline(cin, phone_number);
    for (int i=0; i<phone_number.size(); i++){
        //optional-->change them into captial case first
        //we can do this because of ascii table
        if (phone_number[i]>='a' && phone_number[i]<='z'){
            //c++ treats character as integers
            phone_number[i]-=32;
        }
        if (phone_number[i]>='A' && phone_number[i]<='C'){
            //c++ treats character as integers
            phone_number[i]='2';
        }
        else if
        //continue and finish the rest
    }
    cout<<phone_number;
    return 0;
}
