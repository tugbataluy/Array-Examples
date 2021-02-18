#include<iostream>
//  common sub-sequences: Simple implemention of sliding window algorithms




using namespace std;
int main()
{
    int a[3]={1,2,3};
    int b[10]={9,5,1,2,3,6,7,1,2,3};
    int a_dim=3;
    int b_dim=10;
    
    for(int i=0;i<b_dim;i++)
    {
        bool equal= true;
        
        for(int j=0;j<a_dim;j++)
        {
             
            if(a[j]!=b[i+j])
                { 
                    equal = false;
                    break;
                }

        }
                if(equal) 
                    cout<< "There are  sub-elements start at "<< i<<endl;  
             
            
    }
  
    
    
    
return 0;    
}  
    
    
    
    
    
    
    
    
    








