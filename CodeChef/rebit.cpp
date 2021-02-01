//by mohilllll
#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define pb push_back
#define mod 998244353
#define pmodinvq 748683265
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

vvll getPostfix(string s) {
    vll fixed(4, pmodinvq);
    vvll pf;
    vll Or, And, Xor;
    Or.pb(-1); And.pb(0); Xor.pb(1);
    stack<char> operators;
    for(ll i = 0; i < s.length(); i++) {
        if(s[i] == '#') {
            pf.pb(fixed);
            continue;
        }
        if(s[i] == '(' || operators.empty() || operators.top() == '(')
            operators.push(s[i]);
        else if(s[i] == ')') {
            while(operators.top() != '(') {
                if(operators.top() == '&')
                    pf.pb(And);
                else if(operators.top() == '^')
                    pf.pb(Xor);
                else if(operators.top() == '|')
                    pf.pb(Or);
                operators.pop();
            }
            operators.pop();
        }
        else {
            if(operators.top() == '&')
                pf.pb(And);
            else if(operators.top() == '^')
                pf.pb(Xor);
            else if(operators.top() == '|')
                pf.pb(Or);
            operators.pop();
            operators.push(s[i]);
        }
    }
    //final check just in case
    while(!operators.empty()) {
        if(operators.top() == '&')
            pf.pb(And);
        else if(operators.top() == '^')
            pf.pb(Xor);
        else if(operators.top() == '|')
            pf.pb(Or);
        operators.pop();
    }
    return pf;
}

/*
POSTFIX RETURN FORMAT:
a b c d
op
e f g h
op
.
.
*/

vll setOR(vll a, vll b) {
    vll OR(4);
    ll temp, A, B, C, D;
    OR[0] = (a[0]*b[0])%mod;
    A = b[0];
    for(ll u = 1; u < 4; u++)
        A = (A+b[u])%mod;
    A = (A*a[1])%mod;
    B = a[0];
    B = (B+a[2])%mod;
    B = (B+a[3])%mod;
    B = (B*b[1])%mod;
    C = (a[2]*b[3])%mod;
    D = (a[3]*b[2])%mod;
    temp = A;
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    temp = (temp+D)%mod;
    OR[1] = temp;
    A = (a[0]*b[2])%mod;
    B = (a[2]*b[0])%mod;
    C = (a[2]*b[2])%mod;
    temp = A;
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    OR[2] = temp;
    A = (a[0]*b[3])%mod;
    B = (a[3]*b[0])%mod;
    C = (a[3]*b[3])%mod;
    temp = A;
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    OR[3] = temp;
    return OR;
}

vll setAND(vll a, vll b) {
    vll AND(4);
    ll A, B, C, D, temp;
    AND[1] = (a[1]*b[1])%mod;
    A = b[0];
    for(ll i = 1; i < 4; i++)
        A = (A+b[i])%mod;
    A = (A*a[0])%mod;
    //change
    B = (a[1]+a[2])%mod;
    B = (B+a[3])%mod;
    B = (B*b[0])%mod;
    C = (a[2]*b[3])%mod;
    D = (a[3]*b[2])%mod;
    //check
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    temp = (temp+D)%mod;
    AND[0] = temp;
    A = (a[1]*b[2])%mod;
    B = (a[2]*b[1])%mod;
    C = (a[2]*b[2])%mod;
    //check
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    AND[2] = temp;
    A = (a[1]*b[3])%mod;
    B = (a[3]*b[1])%mod;
    C = (a[3]*b[3])%mod;
    //check
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    AND[3] = temp;
    return AND;
}

vll setXOR(vll a, vll b) {
    ll A, B, C, D, temp;
    vll XOR(4);
    A = (a[0]*b[0])%mod;
    B = (a[1]*b[1])%mod;
    C = (a[2]*b[2])%mod;
    D = (a[3]*b[3])%mod;
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    temp = (temp+D)%mod;
    XOR[0] = temp;
    A = (a[0]*b[1])%mod;
    B = (a[1]*b[0])%mod;
    C = (a[2]*b[3])%mod;
    D = (a[3]*b[2])%mod;
    //check
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    temp = (temp+D)%mod;
    XOR[1] = temp;
    A = (a[0]*b[2])%mod;
    B = (a[1]*b[3])%mod;
    C = (a[2]*b[0])%mod;
    D = (a[3]*b[1])%mod;
    //check
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    temp = (temp+D)%mod;
    XOR[2] = temp;
    A = (a[0]*b[3])%mod;
    B = (a[1]*b[2])%mod;
    C = (a[2]*b[1])%mod;
    D = (a[3]*b[0])%mod;
    //check here
    temp = (A+B)%mod;
    temp = (temp+C)%mod;
    temp = (temp+D)%mod;
    XOR[3] = temp;
    return XOR;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        string s; cin >> s;
        vvll postfix = getPostfix(s);
        for(ll i = 0; i < postfix.size(); i++) {
            for(ll j = 0; j < postfix[i].size(); j++)
                cout << postfix[i][j] << " ";
            cout << endl;
        }
        stack<vll> values;
        vll temp;
        for(ll i = 0; i < postfix.size(); i++) {
            temp = postfix[i];
            if(temp.size() == 4) // that means values
                values.push(temp);
            else if(temp.size() == 1) { // that means operands
                vll set1, set2, sol;
                set1 = values.top();
                values.pop();
                set2 = values.top();
                values.pop();
                if(temp[0] == -1) // see index val at getPostfix
                    sol = setOR(set1, set2);
                if(temp[0] == 0)
                    sol = setAND(set1, set2);
                if(temp[0] == 1)
                    sol = setXOR(set1, set2);
                values.push(sol); // to the stack for next use
            }   
        }
        vll finalAns = values.top(); // check how to mod them
        for(ll i = 0; i < 4; i++)
            cout << finalAns[i]%mod << " ";
        cout << "\n";
    }
    return 0;
}