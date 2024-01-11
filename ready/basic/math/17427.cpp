//약수의 합 2

#include <iostream>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  long long sum = 0;
  for(int i=1; i<=n; i++){
    int temp = n/i;
    sum += temp * i;
  }

  cout << sum;

  return 0;
}
