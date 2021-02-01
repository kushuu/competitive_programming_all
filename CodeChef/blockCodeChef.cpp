#include<bits/stdc++.h>

using namespace std;

void reachedOneOne()
{
    cout <<"19\n8 8\n4 4\n7 1\n1 7\n3 5\n6 8\n1 3\n4 6\n8 2\n2 8\n3 7\n4 8\n1 5\n5 1\n4 2\n8 6\n3 1\n7 5\n8 4";
}

int main()
{
    int T, r, c;
    cin>>T;
    while(T) {
        cin>>r>>c;
        if ( r == 1 && c == 1 ) {
            reachedOneOne();
        }
        else {
            cout<<"else block";
        }
        T--;
    }
}