
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //string can also be extended
    string s="This class is good", s2="not";
   // cout<<s.size();
    //cout<<s[0];
    s+=s2;
    cout<<s<<endl;
    cout<<s2<<endl;
    s+='a'; //if you see '' not a string, but just a character 
    cout<<s<<endl;
    // '' is a character 
    // " " is a string
    return 0;
}
