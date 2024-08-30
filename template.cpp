#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
  int N;
  vector<string> S(N);
  rep(i, N) cin >> S.at(i);
  int count = 0;
  rep(i, N){
    if(S.at(i) == "Takahashi") count++;
  }
  cout << count << endl;

  return 0;
}