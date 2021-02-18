#include<iostream>
// Example: Find out the average of an array
// Average of even numbers of an array
// Average of odd numbers of an array
// Bonus Game: Find out the max and sum of 4 elements of an array which has 5 elements.

using namespace std;
int main()
{
    int b[8]={12,23,65,18,14,58,90,75};
    int total=0;
    int total_even=0;
    int even=0;
    int total_odd=0;
    int odd=0;
    for (int i=0;i<8;i++)
        {
            
           if(b[i]%2==0)
                {
                    total_even+=b[i];
                    even++;
                }
            else
                {
                  total_odd+=b[i];
                  odd++;
                }
                total+=b[i];
        }
    cout<<"Average:"<< (float) total/8 <<endl;
   // cout<< total_odd<<endl; check out whether code works or not
    //cout<< total_even<<endl;
    cout <<"Odd Numbers Average:"<<(float)total_odd/odd<< endl;
    cout<<"Even Numbers Average:"<< (float)total_even/even<< endl;
// Game Time Algorithm: If you find out total sum and min-max elements you can calculate max and min sum of 4 elements.
   int game[5]={13,22,34,11,52};
   int greatest=game[0];
   int least=game[0];
   int game_tot=0;
   for (int i=0;i<5;i++)
    {
       game_tot+=game[i];  
    }
    for (int i=0;i<5;i++)
        {
            if(greatest<game[i])
                {
                    greatest=game[i];
                }
             if(least>game[i])
                 {
                  
                    least=game[i];
                
                 }
        }
    cout<< "4 elements max sum:"<< game_tot-least<<endl;
    cout<<"4 elements min sum:"<< game_tot-greatest;
return 0;    
}