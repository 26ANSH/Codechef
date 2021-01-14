#include<iostream>
using namespace std;

void print(long long int a[])
{
    for (int i = 0;i<2;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

using namespace std;
int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
       // cout<<"new case"<<endl;
        
        long long int n, k, x, y;
        
        cin>>n>>k>>x>>y;
        
        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
        }
        
        else
        {
            long long int points[4][2];
            
            if(x>y)
            {
                points[0][0] = n;
                points[0][1] = n-x+y;
                points[1][0] = n-x+y;
                points[1][1] = n;
                points[2][0] = 0;
                points[2][1] = x-y;
                points[3][0] = x-y;
                points[3][1] = 0;
                
                k %= 4;
                
                if (k == 0)
                    k = 4;
            
                print(points[k-1]);
            }
            else if(y>x)
            {
                points[0][0] = n-y+x;
                points[0][1] = n;
                points[1][0] = n;
                points[1][1] = n-y+x;
                points[2][0] = y-x;
                points[2][1] = 0;
                points[3][0] = 0;
                points[3][1] = y-x;
                
                k %= 4;
                
                if (k == 0)
                    k = 4;
            
                print(points[k-1]);
            }
        }
    }
    
    return 0;
}
