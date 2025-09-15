//compound math operator

#include <iostream>
using namespace std;

int main(){
    
    int a=3, b=7, c=11, d=21;
    a+=5;//same as a=a+(5);
    cout<<a<<endl;
    b-=10; //same as b=b-(10);
    cout<<b<<endl;
    c*=10; //same as c=c*(10);
    cout<<c<<endl;
    d/=2; //same as d=d/(2); 
    cout<<d<<endl; //integer division
    
    //becareful this could be tricky
    int e=5, f=9;
    e*=f+2; //e=e*(f+2); bedmas
    cout<<e<<endl;
    return 0;
}
