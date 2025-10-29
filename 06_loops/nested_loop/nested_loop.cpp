/*so far we have learnt:
1. while loop and for loop
2. how we can change from one into another
3. break and continue
break exits the loop we are in 
continue goes back to the condition 
while(True) --it goes on forever
for loop-->increment/decrement is the last thing to happen 
increment/decrement ++  -- (pre and post)
pre-increment or decrement it will increase right away 
post-increment or decrement it will happen next line 
*/
#include <iostream>
#include <cstdlib> //include random
#include <ctime> //ctime
using namespace std;
/* apply increment and decrement symbol to the loop 
nested loop*/
int main()
{
    
    int number;
    bool primenumber=true;
    while(true){
        primenumber=true; //reset 
        cout<<"Enter a number: "; //later on, change it to -1 to exit
        cin>>number;
        if (number<0){
            break;
        }
        for(int i=2; i<number; i++){
            if (number%i==0){
                primenumber=false;
                cout<<"It is not a prime number."<<endl;
                cout<<i<<"x"<<number/i<<endl;
                break;
            }
        }
        if (primenumber==true){
            cout<<"It is a prime number"<<endl;
        }
    }
    return 0;
}
