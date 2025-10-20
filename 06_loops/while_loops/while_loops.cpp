
#include <iostream>
using namespace std;
int main()
{
    /*According to structred program theorem, it says that if you know:
    1. sequence (next step)
    2. selection (if else)
    3. iteration (loops)
    you can solve any solvable prograamming questions*/
    int start=1; //step 1 
    while (start<=10){ //step 2: condition
       cout<<start<<endl;
       start+=1; //step 3: modify the value such that it has a chance to exit    
    }
    cout<<"done"<<endl;
    return 0;
}
