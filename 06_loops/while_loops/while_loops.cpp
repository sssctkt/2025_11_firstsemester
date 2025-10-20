
#include <iostream>
#include <ctime> //for time 
#include <cstdlib> // for rand()
using namespace std;
int main()
{   //goal: create a "FAIR" random number generator
    
    //how you start a random value
    srand(time(NULL));
    int random=1;
    while(random!=4){
        random=rand()%20+1; //between 1 and 20;
        cout<<random<<endl;
    }
    cout<<random;
    return 0;
}
