#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int nums[3];
        for (int i =0;i<3;i++)
            cin>>nums[i];
        
        sort(nums, nums+3);
        cout<<nums[1]<<endl;
    }
    
	return 0;
}
