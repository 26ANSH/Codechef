// The solution gives a TLE
// This is a Brute Force Solution though it gives correct answers but it is a TLE ~ 1.51000 secs
// time Limit 1.5 secs


#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int N, Q, temp;
        
        cin>>N>>Q;
        
        vector<int> array;
        
        for(int i =0; i<N; i++)
        {
            cin>>temp;
            array.push_back(temp);
        }
        
        while(Q--)
        {
            int q;
            cin>>q;
    
            if(q == 1)
            {
                int x,y;
                cin>>x>>y;
                
                array[x-1] = y;
            }
            else
            {
                int n, count = 0;
                cin>>n;
                
                for(int i =0; i<n; i++)
                {
                    for(int j = i; j<n; j++)
                    {
                        set<int, greater<int> > s;
                        
                        for(vector<int>::iterator ip = array.begin() + i; ip < array.begin() + j + 1; ip++)
                        {
                            s.insert(*ip);
                        }
                        count += s.size();
                    }
                }
                
                cout<<count<<endl;
                
            }
            
        }
    
    
	return 0;
}
