#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
  int N;
  cin >> N;

  vector<pair<int, char>> arr(N);
  rep(i, N){
    int A;
    char S;
    cin >> A >> S;
    arr[i] = make_pair(A, S);
  }

  // LとRで配列を作り直す
  vector<int> arrL;
  vector<int> arrR;
  rep(i, N){
    if(arr[i].second == 'L'){
      arrL.push_back(arr[i].first);
    }
    if(arr[i].second == 'R'){
      arrR.push_back(arr[i].first);
    }
  }

  int fatigueL = 0; 
  int fatigueR = 0; 
  for(size_t i = 0; i < arrL.size(); i++){
    if(i == 0) continue;
    fatigueL += abs(arrL[i] - arrL[i - 1]);
  }
  for(size_t i = 0; i < arrR.size(); i++){
    if(i == 0) continue;
    fatigueR += abs(arrR[i] - arrR[i - 1]);
  }

  cout << fatigueL + fatigueR << endl;

  return 0;
}