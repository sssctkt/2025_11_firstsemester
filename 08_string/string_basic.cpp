
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="I'm going home!", s2;
    //the length of the string
    int length=s1.size();
    cout<<length<<endl;
    //If the length is 15, index 0-14
    cout<<s1[14]<<endl;
    //string class can also expand the string (character or string)
    getline(cin, s2);
    cout<<s2<<endl;
    s1+=s2; //s1=s1+s2
    cout<<s1<<endl;
    
    //New day, you can also copy string and replace it
    s1='b';
    cout<<s1<<endl;
    
    return 0;
}
