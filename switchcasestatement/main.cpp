#include <iostream>

using namespace std;

int main()
{
    //switch case statement
    //switch case is very similar to if and else statement 
    //but switch case doesn't work for > <, >=, etc 
    //only for equal 
    int level;
    cout<<"Enter your level: ";
    cin>>level;
    switch(level){
        case 4:cout<<"A";break;
        case 3:cout<<"B";break;
        case 2:cout<<"C";break;
        case 1:cout<<"D";break;
        default:cout<<"you fail!";break;
    }
    
    
    
    
    
    
    
    
    return 0;
}
