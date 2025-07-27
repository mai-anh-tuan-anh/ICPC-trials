#include<bits/stdc++.h>
using namespace std;
long long mod(string b, long long a){
    long long res=0;
    for(char digit: b){
        res=(res*10+(digit-'0'))%a;
    }
    return res;
}
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    int T;
    cin >> T;
    while(T--){
        long long a;
        string b;
        cin >> a >> b;
        cout << gcd(a,mod(b,a)) << endl;
    }
    return 0;
}