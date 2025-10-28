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
    //nested loop--loop inside a loop
    //start the random seed
    srand(time(NULL));
    int answer, number,count=0; //count how many times we have guessed the number
    int choice;
    while(true){
        cout<<"Enter 1 to start playing the game. 2 to exit: ";
        cin>>choice;
        if (choice==1){
            ;
        }
        else{
            break;
        }
        answer=rand()%100+1; //between 1-100
        while(true){
            cout<<"Guess a number: ";
            cin>>number;
            count++;
            if (number>answer){
                cout<<"Too Big"<<endl;
            }
            else if (number<answer){
                cout<<"Too small"<<endl;
            }
            else{
                break;
            }
            
        }
        if (count<=5){
            cout<<"it took you "<<count<<" attempts. Good Job!"<<endl;
        }
        else{
            cout<<"it took you "<<count<<" attempts. The whole class will have a"<<endl;
            cout<<"one page quiz on Friday"<<endl;
        }
    }
    return 0;
}
