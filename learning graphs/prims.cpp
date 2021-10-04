/****************************************************************
Author: kushuu   File: prims.cpp    Date: Mon Oct 04 2021
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

ll min_key(vll key, vector<bool> vis) {
    ll min_ = LLONG_MAX, ans = -1;
    for(ll i = 0, size = s(key); i < size; i++) {
        if(!vis[i] and key[i] < min_) min_ = key[i], ans = i;
    }
    return ans;
}

void prim_mst(vector<vector<ll>> graph) {
    ll v = s(graph);
    vll parent(v), key(v, LLONG_MAX);
    vector<bool> vis(v, false);

    key[0] = 0;
    parent[0] = -1;

    for(ll idx = 0; idx < v-1; idx++) {
        ll next_idx = min_key(key, vis);
        vis[idx] = true;
        for(ll vertex = 0; vertex < v; vertex++) {
            if(graph[next_idx][vertex] and !vis[vertex] and graph[next_idx][vertex] < key[vertex])
                parent[vertex] = next_idx, key[vertex] = graph[next_idx][vertex];
        }
    }

    ll min_cost = 0;
    cout<<"Edge \tWeight\n";
    for (ll i = 1; i < v; i++) {
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
        min_cost += graph[i][parent[i]];
    }
    
    cout << "Minimum cost: " << min_cost;
}

int main() {
    fastIO;
    ll v; cin >> v;   // number of vertices.
    vector<vector<ll>> graph(v, vector<ll>(v));
    for(ll i = 0; i < v; i++) for(ll x = 0; x < v; x++) cin >> graph[i][x];

    prim_mst(graph);

    return 0;
}