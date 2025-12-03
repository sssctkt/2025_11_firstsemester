
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //string 
    //what is a string-->string is a collection of characters
    
    //most of the time you will be using new and easy method to deal with string  
    string s; //string class
    int length;
    //string class also gives us very easy way to manipulate the string 
    //1. find the length of the string 
    getline(cin, s);
    length=s.size(); //how you find the length of the string (starts at 1)
    cout<<length;
    return 0;
}
