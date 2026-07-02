#include<bits/stdc++.h>
#define sp " "
#define nl "\n"
#define cn continue;
#define int long long 
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(n <= 2)
        {
            cout << 1 << nl;cn;
        }
        int ans = 0;
        if(str[0] == '1')
        {
            ans++;
        }
        else{
            if(str[1] == '0' && str[2] == '1')
            {
                ans++;
                str[0] = '1';
            }
            else if(str[1] = '0' && str[2] == '0')
            {
                str[1] = '1';
            }
        }
        for(int i = 1; i < str.size() - 2; i++)
        {
            if(str[i] == '1')
            {
                ans++;
                cn;
            }
            if(str[i-1] != '1' && str[i + 1] != '1')
            {
                if(str[i+2] != '1')
                {
                    str[i+1] = '1';
                    //ans++;
                    //i++;
                }
                else
                {
                    str[i] = '1';
                    ans++;
                    i++;
                }
            }
        }


        // if(n > 3)
        // {
        //     if(str[n-2] == '1' && str[n-3] == '0' && str[n-4] == '0')
        //         {
        //             ans++;
        //         }
        // }
        // else{
        //     if(str[n-3] == '0' && str[n-1] == '0')
        //     {
        //         ans++;
        //         str[n-2] = '1';
        //     }
        // }


        //cout << str;
        //cout << "faah"<< str[n-1] << nl;
        if(str[n - 1] == '0')
        {
            if(str[n - 2] != '1')
            {
                ans++;
                str[n-1] = '1';
            }
        }
        else {
            ans++;
        }
        //cout << str << nl;
        //cout << ans << nl;
        int nr = 0;
        for(auto c: str)
        {
            if(c == '1')
            {
                nr++;
            }
        }
        cout << nr << nl;
    }
}