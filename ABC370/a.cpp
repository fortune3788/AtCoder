#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
  string s;
  cin >> s;

  string ans;
  for(size_t i = 0; i < s.length(); i++){
    if(s[i] != '.'){
      ans += s[i];
    }
  }

  cout << ans << endl;

  return 0;
}