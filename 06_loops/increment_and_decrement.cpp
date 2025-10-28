/*so far we have learnt:
1. while loop and for loop
2. how we can change from one into another
3. break and continue
break exits the loop we are in 
continue goes back to the condition 
for loop-->increment/decrement is the last thing to happen 
increment/decrement ++  -- (pre and post)
pre-increment or decrement it will increase right away 
post-increment or decrement it will happen next line 
*/
#include <iostream>
using namespace std;
/* apply increment and decrement symbol to the loop 
nested loop*/
int main()
{
    /*very important--pre and post increment/decrement has no difference on the loop
    */
    for (int i=0; i<11; ++i){
        cout<<i<<endl;
    }
    return 0;
}
