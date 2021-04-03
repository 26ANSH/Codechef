#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        unsigned long long int n, sum = 0;
        cin>>n;
        
        if(n<4)
        {
            sum+=(4*n);
        }
        else
        {
            sum = n/4 - 1;
            n = n%4;
            sum = sum*44 + 60;
        }
            
        
        if(n==1)
            sum+=16;
        else if(n==2)
            sum+=28;
        else if(n==3)
            sum+=39;
        
        cout<<sum<<endl;
        
    }
    
    return 0;
}
