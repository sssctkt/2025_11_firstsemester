
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    //string class vs c-style string
    string s1="going home";
    char cs1[50]="going home"; //it will be wrong if you put 10!!!
    cs1[20]='s';
    
    /*\0 indicate the end of the sentence in cstring, it will be put 
    automatically when you initialize the sentence, 
    but you have to leave enough space!!*/
    cout<<s1<<endl<<cs1<<endl;
    
    return 0;
}
