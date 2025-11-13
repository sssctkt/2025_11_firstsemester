
#include <iostream>
#define length sizeof(a)/sizeof(a[0])
using namespace std;
int main()
{
    int a[5]={0, 2, 5, 8, 12}; //this is the only line that [10] is the length
    
    for (int i=0; i<length; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
