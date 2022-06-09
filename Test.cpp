#include <bits/stdc++.h> // Include every standard library
#include <iostream>
using namespace std;
 
typedef long long LL;

#define se second
#define fi first

void enableFastIO()
{
    ios_base::sync_with_stdio(false);   // Disable backwards compatability scanf(), printf() sync with cin.
    cin.tie(NULL);                      // Disable sync with cout. WARNING: May lead to problems with frequent switch btwn cin&cout
}
// end of template
 
int main()
{
    enableFastIO();
    // Use fastscan(int &number) for reading int

    int T; cin>>(T);

    while(T--)
    {   
        LL n; cin>>(n);
        LL k; cin>>(k);
        unsigned long long ans=0;
        
        map<LL, map<LL, LL>> m;
        
        for(int i=0; i<n; i++)
        {
            LL s; cin>>(s);
            LL f; cin>>(f);
            LL p; cin>>(p);
            
            auto it = m.find(p);
            
            if(it == m.end())   // If Not Present
            {
                map<LL, LL> entry;
                entry.insert(pair<LL, LL>(f, s));
                
                m.insert(pair<LL, map<LL, LL>>(p, entry));
            }   
            else        // If Present
            {
                (it->se).insert(pair<LL, LL>(f, s));
            }
            
        }
        
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            auto entries = it->se;
            int t=0;

            if(entries.size() == 1)    // Single Occurence
            {
                ans+=1;
            }       
            else if(entries.size()>1)  // Many Occurences
            {
                for(auto _it=entries.begin(); _it!=entries.end() ; _it++)
                {
                    LL f = _it->fi;
                    LL s = _it->se;
                                 
                    if(s>=t)
                    {
                        ans++;
                        t=f;
                    }
                }
            }
            
        }
        
        cout << ans << '\n';
    }

    return 0;
}