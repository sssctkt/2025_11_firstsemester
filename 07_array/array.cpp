// Exercise 6 question 3 answer
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a[40]={0,1}; //rest of the entry
  for (int i=2; i<40; i++){
        a[i]=a[i-1]+a[i-2];  
    }
  for (int i=0; i<40; i++){
      cout<<a[i]<<" ";
  }
  return 0;
}
