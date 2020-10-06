
#include <bits/stdc++.h>

using namespace std;
int n = 3;
vector<int> subset;
vector<vector<int>> sets;
vector<int> myset = {100, 755, 2};
void search(int k) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if(k == n) {
        if(subset.size() > 0)
            sets.push_back(subset);
    } else {
        search(k+1);
        subset.push_back(myset[k]);
        search(k+1);
        subset.pop_back();
    }
}
int main() {
    search(0);
    for(auto i: sets){
        cout << "{ ";
        for(auto x: i){
                cout << x << " ";
        }
        cout << "} " << endl;
    }
}


