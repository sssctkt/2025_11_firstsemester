
#include <iostream>
using namespace std;
int main()
{
    //introduce some key word "break", "continue"
    //introduce the key difference between while loop and for loop
    //application
    
    //break is to get out of the loop it is in (only the inner it is in)
    
    for (int i=0; i<20; i+=1){
        if (i==13){
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}
