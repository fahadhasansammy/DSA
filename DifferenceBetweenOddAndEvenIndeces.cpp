#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a[6] = {2, 1, 2, 1, 2, 1};
    int ans = 0;
    for(int i = 0; i < 6; i++) {
        if(i % 2 == 0) {
            ans += a[i];
        }
        else {
            ans -= a[i];
        }
    }
    cout << ans << endl;
}
/*
  [0]=2;
  [1]=2-1;
  [2]=1+2;
  [3]=3-1;
  [4]=2+2;
  [5]=4-1;
*/