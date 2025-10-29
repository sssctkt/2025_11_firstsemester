#include <iostream>
using namespace std;

int main(){
    
    //today's lesson you have to understand the basic of 
    //nested for loop pattern
    
    //go to pythontutor , trace the code and see
    int row, a, b;
    cin>>row;
    for (a=1; a<=row; a++){
        for (b=1; b<=a; b++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}
