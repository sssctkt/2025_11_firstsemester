
#include <iostream>
using namespace std;
//if else statement confusion
int main()
{
    //why do we need else if and else-->pick one and discards the other
    int mark;
    cout<<"Enter your mark";
    cin>>mark;
    if (mark>=80 && mark<=100){
        cout<<"A"<<endl;
    }
    if (mark>=70 && mark<=80){
        cout<<"B"<<endl;
    }
    if (mark>=60 && mark<=70){
        cout<<"C"<<endl;
    }
    if (mark>=50 && mark<=60){
        cout<<"D"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}
