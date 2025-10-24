
#include <iostream>
using namespace std;
int main()
{
    //introduce some key word "break", "continue"
    //introduce the key difference between while loop and for loop
    //application
    
    //break is to get out of the loop it is in (only the inner it is in)
    //continue is to go back to the loop control mechanism
    for (int i=0; i<20; i+=1){//-<loop control mechanism
        if (i==13){
            continue;
        }
        cout<<i<<endl;
    }
    //in for loop, increment/decrement is the last thing to happen
    return 0;
}
