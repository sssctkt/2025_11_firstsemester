
#include <iostream>
using namespace std;
int main()
{
    /*
    int a[5][3]={{1, 2, 3}, {4, 5}, {9}, {8, 10, 11}, {11, 12, 13}}; //mult-dimensional array 
    //row, then column 
    //they follow index practise 
    //left to right , then up to down
    cout<<a[3][1]<<endl;
    cout<<a[4][0]<<endl;
    cout<<a[1][1]<<endl;
    */
    float b[3][2];
    //if you want it to be left to right, then top to bottom
    for (int m=0; m<3; m++){ //row
        cout<<"Row "<<m+1<<":";
        for (int n=0; n<2; n++) {//column
            cin>>b[m][n]; //ALWAYS be row and column
        }
    }
    
    for (int m=0; m<3; m++){ //row
        int result=0;
        cout<<"Row "<<m+1<<":";
        for (int n=0; n<2; n++) {//column
            result=result+b[m][n];
            cout<<b[m][n]<<" "; //ALWAYS be row and column
        }
        cout<<"sum of row "<<m+1<<"is :"<<result;
        cout<<endl;
    }
    //Try to add the column sum (vertically) 
    //it will be tough to display it side by side 
    //create another nested loop, print the answer at the bottom
    return 0;
}
