#include<iostream>
#include <algorithm>

using namespace std;
int main()
{
    int test;
    cin>>test;
    
    long long int n_size, m_size, n_total = 0, m_total = 0;
    
    while(test--)
    {
        n_total = 0;
        m_total = 0;
        
        cin>>n_size>>m_size;
        
        int *n_vote = new int[n_size], *m_vote = new int[m_size];
        
        for (int i=0; i<n_size; i++)
        {
            cin>>n_vote[i];
            n_total += n_vote[i];
        }
        
        for (int i=0; i<m_size; i++)
        {
            cin>>m_vote[i];
            m_total += m_vote[i];
        }
        
        int swap_count = 0;
        
        sort(n_vote, n_vote + n_size);
        sort(m_vote, m_vote + m_size);
        
        while (n_total <= m_total )
        {
            if(n_vote[swap_count] > m_vote[m_size-1-swap_count])
            {
                swap_count = -1;
                break;
            }
            else if(n_vote[swap_count] < m_vote[m_size-1-swap_count])
            {
                n_total = n_total - n_vote[swap_count] + m_vote[m_size-1-swap_count];
                m_total = m_total + n_vote[swap_count] - m_vote[m_size-1-swap_count];
            }
            
            swap_count++;
        }
        
        if (swap_count > min(n_size, m_size))
            swap_count = -1;
        
        cout<<swap_count<<endl;
    }
    
    return 0;
}
