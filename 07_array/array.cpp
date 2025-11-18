// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a[]={1, 2, 3, 4, 5};
  int answer=0; //if you do not initiaze it to be 0, it will be random
  int length=sizeof(a)/sizeof(a[0]);
  //int b[]; wrong
  //a[5]={1, 2, 3, 4, 5}; //wrong
  for (int i=length-1; i>=0; i--){
      answer+=a[i];
      cout<<a[i]<<" ";
  }
  cout<<endl<<answer;
  return 0;
}
