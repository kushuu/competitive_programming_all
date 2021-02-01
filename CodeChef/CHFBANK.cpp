#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any) 
#define MAX 700
#define maxSum 15000000
using​ ​namespace​ ​std​;
bool​ visited[maxSum];
int​ ​main​()​
{
    vll ans, sum;
    ​memset​(visited, ​false​, ​sizeof​(visited));
    ans.pb(​1​); sum.pb(​1​);
    visited[​2​] = ​true​;
    ​while​(ans.size() != MAX) {
        ll check = ans.back()+​1​;
        ​while​(​true​) {
            ​bool​ yup = ​true​;​
            for​(​auto​ x : ans) {
                ​if​(visited[check+x]) {
                    yup = ​false​;
                    ​break​;
                }
            }​
            if​(yup)​
                break​;
            check++;
        }
        ans.pb(check);
        sum.pb(sum.back() + check);
        ​for​(​auto​ x : ans)
            visited[check+x] = ​true​;
    }
    ll t; ​cin​ >> t;
    ​for​(ll qq = ​0​; qq < t; qq++) {
        ll n; ​cin​ >> n;​
        for​(ll i = ​0​; i < n; i++) ​cout​ << ans[i] << ​" "​; ​cout​ << ​endl​;​
        cout​ << sum[n​-1​] << ​endl​;
    }
    return 0;
}