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
        float a, b, c, v, r=9.58;
        float speed = 100;
        cin>>a>>b>>c>>v;
        speed /= (a*b*c*v);
        speed=floor((speed * 100) + .5)/100;
        
        if(speed < r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
