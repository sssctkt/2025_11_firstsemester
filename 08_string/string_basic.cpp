
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //string 
    //what is a string-->string is a collection of characters
    
    //most of the time you will be using new and easy method to deal with string  
    string s; //string class
    cout<<"Enter a sentence: ";
    //cin doesn't take space nor enter key 
    //if you want to enter everything in one line 
    getline(cin, s);
    cout<<s<<endl;
    //string is like an array (index starts at 0)
    cout<<s[1];
    return 0;
}
