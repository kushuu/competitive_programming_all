/****************************************************************
Author: kushuu   File: dfs.cpp    Date: Mon Oct 04 2021
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

class Graph {
    public:
    unordered_map<int, bool> vis;
    unordered_map<int, vector<int>> adj_list;

    void add_node(int v, int w) {
        adj_list[v].push_back(w);
    }
    
    void dfs(int start) {
        vis[start] = true;
        cout << start << " " ;
        for(auto i : adj_list[start]) {
            if(!vis[i]) dfs(i);
        }
    }

    void bfs(int start) {
        queue<int> check;
        check.push(start);
        vis[start] = true;
        while(!check.empty()) {
            int curr = check.front();
            check.pop();
            cout << curr << " " ;
            for(auto i : adj_list[curr]) {
                if(!vis[i]) {
                    vis[i] = true;
                    check.push(i);
                }
            }
        }
    }
};

int main() {
    fastIO;
    Graph G;
    G.add_node(0, 1);
    G.add_node(0, 2);
    G.add_node(1, 2);
    G.add_node(2, 0);
    G.add_node(2, 3);
    G.add_node(3, 3);

    G.dfs(2); cout << endl;
    for(auto &i : G.vis) i.S = false;  // resetting vis to false for BFS.
    G.bfs(2); cout << endl;
    return 0;
}