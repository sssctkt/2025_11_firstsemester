
#include <iostream>
using namespace std;
int main()
{
    //today's lesson: two more forms of if else statement
    //1. if, else if, else
    //2. nested if statement-->if statement inside an if statement
    string color;
    int number;
    cout<<"Enter a postive integer: ";
    cin>>number;
    cin.ignore(); //ignore the \n
    cout<<"Enter your favourite color, red, blue, or pink: ";
    getline(cin, color); //cin for string
    if (number%2==0){
        cout<<"you chose an even number!\n";
        cout<<"you must like barcelona\n";
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
    }
    else{
        cout<<"you chose an odd number!\n";
        cout<<"you must like messi\n";
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
    }
    return 0;
}
