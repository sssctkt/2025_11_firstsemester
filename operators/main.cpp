
#include <iostream>
using namespace std;
int main()
{
    //comparision operators
    // > < >=, <=, ==, !=
    int number;
    cin>>number;
    if (number%2==0){//multiple of 2 (even number)
         cout<<"It is an even number"<<endl;
    }
    if (number%2!=0){
        cout<<"It is an odd number"<<endl;
    }
    if (number%11==0){
        cout<<"it is a multiple of 11"<<endl;
    }
    if (number%5!=0){
        cout<<"it is not a multiple of 5"<<endl;
    }

    return 0;
}
