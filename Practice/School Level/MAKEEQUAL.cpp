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
        int n, max = 0, min =INT_MAX;;
        cin>>n;
        
        int nums[n];
        
        for(int i =0; i<n; i++)
        {
            cin>>nums[i];
            
            if(nums[i] > max)
            max = nums[i];
            
            if(min > nums[i])
            min = nums[i];
        }
        
        cout<<max-min<<endl;
    }
    
	return 0;
}
