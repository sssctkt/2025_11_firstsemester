
#include <iostream>
#include <string> //collection of sentence
using namespace std;
int main()
{
    string s1, s2, s3;//s3 is the temporary variables
    cout<<"Enter the first message: ";
    getline(cin, s1); //get the first message
    cout<<"Enter the second message: ";
    getline(cin, s2); //get the second message
    
    s3=s1;
    s1=s2;
    s2=s3;
    //do your work here
    //swap the message
    //you can but you can only create one extra variables
    
    
    cout<<s1<<endl; //it should print s2
    cout<<s2<<endl; //it should print s1
    return 0;
}
