#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        // if(n < 18)
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        vector<int>v;
        int sum = 0;
        int temp = n;
        while(n > 0)
        {
            sum += n % 10;
            v.push_back(n%10);
            n /= 10;
            if(n < 10)
            {
                if(n != 1)
                {
                    v.push_back(n - 1);
                }
                sum += n;
                break;
            }
            
            
            // if(n < 10)
            // {
            //     continue;
            // }
            // temp /= 10;0
        }
        //sum += n;
        //cout << sum  << endl;
        sort(v.rbegin(), v.rend());
        // for(auto c: v)
        // {
        //     cout << c << " ";
        // }
       // cout << endl;
        if(sum < 10)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        bool flag = false;
        for(int i = 0; i < v.size(); i++)
        {
            if(sum < 10)
            {
                //cout << cnt << endl;
                //flag = true;
                break;
            }
            else{
                sum -= v[i];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}