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
        int people, money, trans;
        cin>>people>>money;
        
        for (int i=0; i<people; i++)
        {
            cin>>trans;
            if(money == 0)
            {
                cout<<0;
            }
            else
            {
                if(money >= trans)
                {
                    money-=trans;
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}
