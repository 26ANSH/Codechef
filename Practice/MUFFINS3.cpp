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
        long int n;
        cin>>n;
        cout<<(n+2)/2<<endl;
    }
    
    return 0;
}
