// Partial Correct Solution 30/100
// Last Case Fails - TLE

// This Solution is for Subpart - 1

#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

void print(vector<int> v)
{
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int n, r;
        cin>>n>>r;
        
        vector<int> a(n) ; 
        iota (a.begin(), a.end(), 1);
        
        vector<vector<int>> array;
        array.push_back(a);
        
        bool flag = true;
        int vec = 0;
        
        while(flag == true)
        {
            vector<int> temp;
            for(int i =0; i<array[vec].size(); i += 2)
            {
              temp.push_back(array[vec][i]); 
            }
            for(int i =1; i<array[vec].size(); i += 2)
            {
              temp.push_back(array[vec][i]); 
            }

            if(temp != a)
            {
                array.push_back(temp);
                vec++;
            }
            else
            {
                flag = false;
            }
        }
        
        print(array[r%array.size()]);
    }
    
	return 0;
}
