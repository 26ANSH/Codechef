#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int n, x, sum = 0;
        cin>>n>>x;
        
        vector<int> deposit;
        
        for(int i = 0; i<n; i++)
        {
            int temp;
            cin>>temp;
            
            deposit.push_back(temp);
            sum+= temp;
        }
        
        if(sum<x)
        cout<<-1<<endl;
        else if (sum == x)
        cout<<n<<endl;
        else
        {
            sort(deposit.begin(), deposit.end(), greater<int>());
            sum = 0;
            int min = 0;
            
            for(int coin: deposit)
            {
                sum += coin;
                min +=  1;
                
                if(x <= sum)
                break;
            }
            
            cout<<min<<endl;
            
        }
    }
    
	return 0;
}
