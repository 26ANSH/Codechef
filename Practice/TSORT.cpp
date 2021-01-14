#include <iostream>
#include <algorithm>
using namespace std;
# define sort(a, n) sort(a, a+n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int array[n];
    
    for(int i =0;i<n;i++)
    cin>>array[i];
    
    sort(array, n);
    
    for(auto i: array)
    cout<<i<<endl;
    
	return 0;
}
