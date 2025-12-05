
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    //string class vs c-style string
    string s1;
    char cs1[50]; //it will be wrong if you put 10!!!
    getline(cin, s1); //new string class 
    cin.getline(cs1, 50);
    cout<<s1<<endl<<cs1<<endl;
    //length
    cout<<s1.size()<<endl; //string class
    cout<<strlen(cs1)<<endl; //c-style string
    cout<<sizeof(cs1)/sizeof(cs1[0])<<endl; //wrong
    
    //extend the string
    s1+='a';
    cout<<s1<<endl;
    strcat(cs1, "a"); //concatenate. (extending)
    cout<<cs1<<endl;
    
    //copy and replace
    s1="zzzz";
    cout<<s1<<endl;
    strcpy(cs1, "zzzzz");
    cout<<cs1<<endl;
    
    //comparing
    if (s1>"aaaaa"){
        cout<<"it is bigger"<<endl;
    }
    if (strcmp(cs1, "aaaaaa")>0){
        //>0 -->bigger <0-->smaller, ==0 equal
        cout<<"bigger"<<endl;
    }
    return 0;
}
