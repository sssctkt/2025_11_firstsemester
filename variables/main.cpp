
#include <iostream>
using namespace std;
int main()
{
    double temp; //create a variable
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>temp; //collect input and assign to the variable temp
    temp=(5.0/9)*(temp-32); //integer division!!
    cout<<"The temperature in Celsius is: "<<temp;
    return 0;
}
