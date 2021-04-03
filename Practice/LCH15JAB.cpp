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
        string str;
        int count[26] = {0}, max = 0;
        cin>>str;
        unsigned long n  = str.length();
        
        if((n&1) == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i =0; i<n; i++)
        {
            char c = str[i];
            count[c-97]++;
            
            if(max < count[c-97])
            {
                max = count[c-97];
            }
        }
        
        if((n/2) == max)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
