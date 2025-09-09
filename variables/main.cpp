
#include <iostream>
using namespace std;
int main()
{
    //variable
    //= assignment symbol (from right to left)
    //type
    
    //a variable is to store and manipulate values
    //in c++ , whenever you create a variable, you have to associate with type


    //types: int (integer, no decimal)
    //float-->(decimal, up to 6 decimal places)
    //double-->(decimal, up to 9 decimal places)
    //char-->(one character. Eg, &, u)
    //string-->(collection of characters. Eg: how are you doing??)
    
    //how to create a variable
    //first of all variable cannot start with numbers, 
    //has to be one phrase
    
    int abdul; //this is declaration of an integer variable
    //21=abdul; //assignment symbol can only assign value from right to left
    abdul=21;
    cout<<abdul;
    
    /*more things that could go wrong
    int he is not paying attention; (has to be one phrase)
    int 3x (number cannot go first-->x3 is ok)
    int float (clash with keyword)
    
    */
    double x;
    x=3.14;
    cout<<x;
    
    return 0;
}
