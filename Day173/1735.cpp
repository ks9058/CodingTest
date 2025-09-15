#include <bits/stdc++.h>
using namespace std;

int main() {
    int ac, am, bc, bm;
    cin>>ac>>am;
    cin>>bc>>bm;

    // 분수 합
    int retc = ac * bm + bc * am;
    int retm = am * bm;

    // 최대공약수로 나눔
    int g=gcd(retc, retm);
    retc/=g;
    retm/=g;

    cout<<retc<<" "<<retm;
    return 0;
}
