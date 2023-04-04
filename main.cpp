#include <bits/stdc++.h>

using namespace std;


int main(){
  int n, c;
  cin >> n >> c;


  vector<int> f(n);
  f[0] = c;
  for (int i = 1; i < n; i++)
  {
    if (c > 1){
      c--;
      f[i] = c;
    }else{
      f[i] = 1;
    }
  } 

  int total = 0;
  for (int i = 0; i < n; i++)
  {
  total = total + f[i];
  }

  cout << total << endl ;
  
}