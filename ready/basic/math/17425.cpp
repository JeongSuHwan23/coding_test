//약수의 합

#include <iostream>

#define MAX 1000001

using namespace std;
long long d[MAX];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  for(int i=1; i<MAX; i++){
    for(int j=i; j<MAX; j+=i){
      d[j] += i ;
    }
    d[i] += d[i-1];
  }

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> m;
    cout << d[m] << '\n';
  }

  return 0;
}
