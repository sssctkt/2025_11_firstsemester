
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //c++ treats character as decimal
    char c1, c2='a';
    cin.get(c1); //for character input
    cout<<c1;
    //because of ascii table, character and strings can be compared
    if (c2>c1){
        cout<<"True"<<endl;
    }
    string s1="ABaaaaaaa";
    string s2="ABCCCCCCC";
    if (s1>s2){
        cout<<"will it print here";
    }
    return 0;
}
