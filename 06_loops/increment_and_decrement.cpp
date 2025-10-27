#include <iostream>
using namespace std;

int main(){
    
    //increment/decrement (pre and post)
    //++, or -- for add or subtract by 1 
    
    //pre increment or pre decrement (apply it right away)
    
    int x=21, a=50;
    int y=30, b=90;
    
    cout<<++x<<endl; //pre-increment
    cout<<--y<<endl; //pre-decrement
    
    //post increment or post decrement (apply it next line)
    cout<<a++<<endl; //post-increment
    cout<<a<<endl;
    cout<<b--<<endl; //post-decrement 
    cout<<b<<endl;
    
}
