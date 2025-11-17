//q7 from exercise 6
#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], counter=0;
    for (int i=0; i<10; i++){
        cout<<"Enter number: "<<i+1<<":";
        cin>>a[i];
    }
    for (int i=0; i<10; i++){
        cout<<a[i];
    }
    cout<<endl;
    //lesson for today, you cannot do cout<<a for number array 
    //and you also cannot do b=a;
    for (int i=9; i>=0; i--){
        b[counter++]=a[i];
    }
    for (int i=0; i<10; i++){
        cout<<b[i];
    }
    return 0;
}
