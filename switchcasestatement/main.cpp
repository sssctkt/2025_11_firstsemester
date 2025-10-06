#include <iostream>

using namespace std;

int main()
{
    //switch case statement
    //switch case is very similar to if and else statement 
    //but switch case doesn't work for > <, >=, etc 
    //only for equal 
    char level;
    cout<<"Enter your level: ";
    cin>>level;
    switch(level){
        case 'A':cout<<"good";
        case 'B':cout<<"ok";break;
        case 'C':cout<<"ooooooooooook";
        case 'D':cout<<"not good";
        default:cout<<"you fail!";break;
    }
    
    
    
    
    
    
    
    
    return 0;
}
