
#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,2,2}; //this is the only line that [10] is the length
    //all other times, [] is the index
    //for number array, if you have less number initialized then the length
    //the rest of the content will become zero
    char sentence[50]="hello!";
    //for number array
    cout<<a<<endl; //do not do this for number array
    cout<<sentence<<endl; //character array is an exception
    //in order to print the number array, we got to use a loop to print them
    //one by one
    for (int i=0; i<9; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
