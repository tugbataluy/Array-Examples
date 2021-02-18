#include <iostream>
// Example:Matrices
// Transpose of Matrix
// Sum Of Matrices


using namespace std;
int main()
    {
        int m[3][3]={5,4,3,4,0,4,7,10,3};
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<< m[i][j]<<" ";
            }
            cout <<endl;
        }
         for(int i=0;i<3;i++)
        {
         for (int j=i+1;j<3;j++)
            {
                 int temp= m[j][i];
                 m[j][i]= m[i][j];
                 m[i][j]= temp;
            }    
        }
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<< m[i][j]<<" ";
            }
            cout <<endl;
        }
        // Sum of Matrices
        int a[2][3]={0,1,2,9,8,7};
        int b[2][3]={6,5,4,3,4,5};
        for (int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
                a[i][j]+=b[i][j];
            
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
                cout<<" "<<a[i][j]; 
            cout<< endl;
        }
        return 0;
    }