#include <iostream>
#include <climits>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)
#define ll long long int
#define ull unsigned long long int
#define loop(a, b) for(int i = a; i<b; i++)

int main() 
{
    fastIO
	
    testloop
    {
        int score, min = INT_MAX, index = 0;
        
        loop(0, 3)
        {
            cin>>score;
            
            if(score < min)
            {
                min = score;
                index = i;
                
                // cout<<"change =>"<<score<<" "<<i<<endl;
            }
        }
        
        if(index == 0)
        cout<<"Draw\n";
        else if(index == 1)
        cout<<"Bob\n";
        else
        cout<<"Alice\n";
    }
    
	return 0;
}
