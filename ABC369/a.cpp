#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
  int A, B;
  cin >> A >> B;

  int dif = abs(A - B);

  int ans;
  if(dif == 0) {
    ans = 1;
  }else if(dif == 1){
    ans = 2;
  }else if(dif == 2){
    ans = 3;
  }else{
    if(dif % 2 == 0){
      ans = 3;
    }else if(dif % 2 == 1){
      ans = 2;
    }
  }

  cout << ans << endl;

  return 0;
}