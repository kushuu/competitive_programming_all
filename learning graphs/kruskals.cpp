/****************************************************************
Author: kushuu   File: kruskals.cpp    Date: Tue Oct 05 2021
****************************************************************/

#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,x,y) for(long long i = x; i < y; i++)
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

bool cmp(const pair<ll, pair<ll, ll>> &a, const pair<ll, pair<ll, ll>> &b) {
    return a.second.second < b.second.second;
}

void kruskals(vector<pair<ll, pair<ll, ll>>> graph) {
    ll cost = 0;    // the final answer.
    sort(graph.begin(), graph.end(), cmp);

    cout << "\nGraph looks like:\n";
    cout << "From\t" << "To\t" << "Cost\n";
    for(auto i : graph) cout << i.F << "\t" << i.S.F << " \t" << i.S.S << endl;

    vector<pair<ll, pair<ll, ll>>> result;
    vll tree_id(s(graph));

    for (ll i = 0; i < s(graph); i++) tree_id[i] = i;

    for(auto e : graph) {
        if (tree_id[e.F] != tree_id[e.S.F]) {
            cost += e.S.S;
            result.push_back(e);

            ll old_id = tree_id[e.F], new_id = tree_id[e.S.F];
            for (ll i = 0; i < s(graph); i++) {
                if (tree_id[i] == old_id) tree_id[i] = new_id;
            }
        }
    }
    cout << "\nNew graph looks like:" << endl;

    cout << "From\t" << "To\t" << "Cost\n";
    for(auto i : result) cout << i.F << "\t" << i.S.F << " \t" << i.S.S << endl;

    cout << "Minimum cost: " << cost ;
}

int main() {
    fastIO;
    ll e; cin >> e;
    vector<pair<ll, pair<ll, ll>>> graph(e);
    for(int i = 0; i < e; i++) {
        ll u, v, cost;
        cin >> u >> v >> cost;
        graph[i].first = u;
        graph[i].second.first = v;
        graph[i].second.second = cost;
    }

    kruskals(graph);

    return 0;
}

/*
0 2 0 6 0 
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0
*/