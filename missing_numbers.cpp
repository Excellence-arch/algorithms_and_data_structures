#include <bits/stdc++.h>

using namespace std;


vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    map<int,int> ar;
    map<int,int> br;
    vector<int> found;
    set<int> sets;
    vector<int> dif;
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] == ar[arr[i]]) {
            ar[arr[i]] += 1;
        } else {
            ar[arr[i]] = 1;
        }
    }
    for(int i = 0; i < brr.size(); ++i) {
        if(brr[i] == br[brr[i]]) {
            br[brr[i]] += 1;
        } else {
            br[brr[i]] = 1;
        }
    }
    // if(ar != br) {
    for(auto i = ar.begin(); i != br.end(); ++i) {
        bool finds = false;
        for(auto j = br.begin(); j != br.end(); ++j) {
            if(i->first == j->first and i->second == j->second) {
                finds = true;
            }
        }
        if(finds == false) {
            sets.insert(i->first);
        }
    }
    // }
    for(int i : sets) {
        dif.push_back(i);
    }
    return dif;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>> n;
    cout<< "\n";
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin>> arr[i];
    }
    cin>> m;
    vector<int> brr(m);
    cout<< "\n";
    for(int i = 0; i < n; ++i) {
        cin>> brr[i];
    }

    vector<int> ans = missingNumbers(arr, brr);
    for(int i = 0; i < ans.size(); ++i) {
        cout<< ans[i] << " ";
    }

    return 0;
}
