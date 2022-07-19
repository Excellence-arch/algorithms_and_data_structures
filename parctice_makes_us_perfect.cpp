#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr(4);
    int counts = 0;
    for(int i = 0; i < arr.size(); ++i) {
        cin>> arr[i];
    }
    for(int j = 0;  j<  arr.size(); ++j) {
        if(arr[j] >= 10) {
            counts += 1;
        }
    }
    cout<< counts;
    return 0;
}
