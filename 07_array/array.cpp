//q2 from exercise 6
#include <iostream>
using namespace std;
int main()
{
    int arr[10]; //length is 10 (starts at 1)
    for (int i=0; i<10; i++){
        cout<<"Enter number "<<i+1<<":";
        cin>>arr[i]; //index (starts at 0)
    }
    //cout<<arr<<endl; //in number array you cannot do this
    for (int i=0; i<10; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
