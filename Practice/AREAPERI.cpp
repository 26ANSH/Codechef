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
        long int l, b;
        cin>>l>>b;
        
        long long int a = l*b, p = (2*(b+l));
        
        if(a>p)
        {
            cout<<"Area\n"<<a;
        }
        else if(a==p)
        {
            cout<<"Eq\n"<<a;
        }
        else
        {
            cout<<"Peri\n"<<p;
        }
    }
    
    return 0;
}
