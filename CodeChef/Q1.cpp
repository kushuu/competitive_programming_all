#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, amount, id, totalPrice = 0;    cin >> n >> m;
    double acc;
    map<int, int> students;
    for(int i = 0; i < n; i++) {
        cin >> id >> amount;
        if(students.find(id) == students.end()) {
            students.insert(make_pair(id, amount));
        }
        else {
            students[id] += amount;
        }
        totalPrice += amount;
    }
    double indiPrc = (double)totalPrice/(double)students.size();
    //cout << indiPrc << endl;
    int sum = 0;
    for(int i = 2; i <= m; i++) {
        sum += students[i];
        acc += students[i]-indiPrc;
    }
    //cout << totalPrice << "   " << sum << "  " << indiPrc << endl;
    //cout << 1 << " " << (int)(students[0] - (int)indiPrc) - indiPrc*m  << endl;
    for(int i = 1; i <= m; i++) {
        if(i == 1)
        cout << i << " " << (int)(students[i] - (int)indiPrc) - (indiPrc - (int)indiPrc)*m << endl;
        else
        cout << i << " " << (int)(students[i] - (int)indiPrc) << endl;
    }

}