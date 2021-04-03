#include <iostream>
#include <cmath>
#include <string>
#include <vector>
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
        int n, k;
        cin>>n>>k;
        int minion, count = 0;
        
        for (int i=0; i<n; i++)
        {
            cin>>minion;
            minion+=k;
            
            if(minion%7 == 0)
                count++;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
