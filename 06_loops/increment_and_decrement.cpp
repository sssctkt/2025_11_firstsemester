#include <iostream>
using namespace std;

int main(){
    
    //probably the only type of question you will see on an evaluation 
    //involving increment and decrement
    //can you do it without pressing run button 
    int answer, a=5, b=14, c=30;
    answer=a++ - --b + ++c;
    cout<<answer++<<endl; //1 mark
    cout<<++a<<endl; //1 mark
    cout<<b++<<endl; //1  mark
    cout<<--c<<endl; //1 mark
    cout<<answer<<endl; //1 mark
    
}
