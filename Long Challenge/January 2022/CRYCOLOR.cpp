#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int n = 3, ball;
        int balls[n][n];
       cin>>ball;
       
       for(int i = 0; i<n; i++)
       for(int k = 0; k<n; k++)
       cin>>balls[i][k];
       
       int moves = 0;
       
       
       
       for(int i = 0; i<n; i++)
       {
           if(balls[i][i] == ball)
           continue;
           
           for(int k = 0; k<n; k++)
           {

               if(k == i)
               continue;
               
               for(int j = 0; j<n; j++)
               {
            
                    if(balls[i][i] == ball)
                    break;
                    
                   if( j == i)
                   continue;
                    
                    if(balls[j][i] == 0 || balls[i][k] == 0)
                    continue;
                    
                if(balls[j][i] == balls[i][k])
               {
                   moves += balls[j][i];
                   balls[i][i] += balls[j][i];
                   balls[j][k] += balls[i][k];
                   balls[j][i] = 0;
                   balls[i][k] = 0;
                //   cout<<"eq = "<<balls[1][0]<<endl;
               }
               else if (balls[j][i] > balls[i][k])
               {
                   
                    moves += balls[i][k];
                    balls[i][i] += balls[i][k];
                    balls[j][k] += balls[i][k];
                    balls[j][i] -= balls[i][k];
                    balls[i][k] = 0;
                    // cout<<"min = "<<balls[1][0]<<endl;
               }
               else
               {
                   
                   moves += balls[j][i];
                   balls[i][i] += balls[j][i];
                   balls[j][k] += balls[j][i];
                   balls[i][k] -= balls[j][i];
                   balls[j][i] = 0;
                //   cout<<"max = "<<balls[1][0]<<endl;
               }
               
               }
               
               if(balls[i][i] == ball)
               break;
               
           }
           
           
       }
       
        cout<<moves<<endl;
        
        // for(int i = 0; i<n; i++)
        // {
        //     for(int k = 0; k<n; k++)
        //     cout<<balls[i][k]<<" ";
        //     cout<<endl;
        // }

    }
    
	return 0;
}
