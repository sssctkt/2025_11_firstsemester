
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    //condition
    if (number%2==0){
        //if the condition is true 
        cout<<"It's an even number!";
    }
    
    else{
        //this is false
        cout<<"It is an odd number!";
    }
    cout<<"\nThis is outside of the block";
    /*observation
    1. you do not need an else statement to make it work
    2. notice in the else statement, we have no condition
    3. they cannot be separatated (if and else)
    */
    
    return 0;
}
