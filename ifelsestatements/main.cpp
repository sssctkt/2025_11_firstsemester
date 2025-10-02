
#include <iostream>
using namespace std;
int main()
{
    //today's lesson: two more forms of if else statement
    //1. if, else if, else
    string color;
    cout<<"Enter your favourite color, red, blue, or pink: ";
    getline(cin, color); //cin for string
    if (color=="red" || color=="Red"){
        cout<<"You chose the color red\n";
        cout<<"You are full of energy ";
    }
    else if (color=="blue"){
        cout<<"You chose the color blue\n";
        cout<<"You like to study ";
    }
    else{
        cout<<"You chose the color pink\n";
        cout<<"you like music";
    }
    
    return 0;
}
