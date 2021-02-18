#include <iostream>
#include <stdlib.h> 
#include <time.h>
//Example: Design a game which user determines how many times players will throw dice.
// If a player's dice greater than the other's, player who throws greater number will win the turn.
// At final code determines who is the winner by  calculating the amount of winning during the playtime.


using namespace std;
int main()
    {
        int n;
        cin>>n;
        int User1[n];
        int User2[n];
        
        int score=0;
        srand(time(NULL));
        for(int i=0;i<n;i++)
        {
            int d= rand()%6+1;
            int d2= rand()%6+1;
            //cout<< d<<" "<<d2<<endl;
            User1[i]=d;
            User2[i]=d2;
            if(d>d2) score++;
            else if(d2>d)score--;
            
        }
        for(int i=0;i<n;i++)
            cout<< User1[i]<<" ";
        cout<< endl;
        for(int i=0;i<n;i++)
            cout<< User2[i]<<" ";
        cout<<endl;
        if (score>0) cout<< "User1 has won the game!";
        else if(score<0) cout<<"User2 has won the game!";
        else cout<< "Draw!";
        return 0;
    }