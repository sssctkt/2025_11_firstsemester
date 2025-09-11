
#include <iostream>
#include <string> //collection of sentence
using namespace std;
int main()
{
    string s1="simon";
    string s2="heri";
    
    s1=s2;
    s2="Anoop";
    
    cout<<s1;
    //at this level, if you do not see the variable gets changed directly
    //it will remain the same
    return 0;
}
