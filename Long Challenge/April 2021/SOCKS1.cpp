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
    
    int test=1;
    
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a == b || a== c)
            cout<<"YES";
        else if (b == c)
            cout<<"YES";
        else
            cout<<"NO";
            
    }
    
    return 0;
}
