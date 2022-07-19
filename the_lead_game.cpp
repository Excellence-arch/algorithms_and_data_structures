// #include <bits/stdc++.h>

// using namespace std;

// vector<int> solve(vector<int> first_player, vector<int> second_player) {
//     vector<int> return_vector(2);
//     for(int i = 0; i < first_player.size(); ++i) {
//         int sum = first_player[i] -second_player[i];
//         if(sum > 0 and sum > return_vector[1]) {
//             return_vector[1] = sum;
//             return_vector[0] = 1;
//         } else if(sum < 0 and abs(sum) > return_vector[1]) {
//             return_vector[1] = abs(sum);
//             return_vector[0] = 2;
//         }
//     }
//     return return_vector;
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin>> n;
//     vector<int> first_player(n);
//     vector<int> second_palyer(n);
//     for(int i = 0; i < n; ++i) {
//         cin>> first_player[i];
//         cout<< " ";
//         cin>> second_palyer[i];
//     }
//     vector<int> ans= solve(first_player, second_palyer);
//     cout<< ans[0] << " " << ans[1];
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int r,d=0,lead=0,win;
  cin>>r;
  int p1,p2,s1=0,s2=0;
  for(int i=0;i<r;i++)
  {
      cin>>p1>>p2;
      s1=s1+p1;
      s2=s2+p2;
      if(s1>s2)
      {
           d=s1-s2;
           if(d>lead)
           {
               lead=d;
               win=1;
           }
      }
      else{
        d=s2-s1;
        if(d>lead)
        {
            lead=d;
            win=2;
        }
      }
  }
  cout<<win<<" "<<lead<<endl;
}

