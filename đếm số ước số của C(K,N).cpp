#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n,k;
    while(cin >> n >> k){
        vector<int> s(501,0);
        for(int i=1;i<=n;i++){
            int x=i;
            for(int j=2;j*j<=x;j++){
                while(x%j==0){
                    s[j]+=1;
                    x/=j;
                }
            }
            if(x!=1) s[x]+=1;
        }
        for(int i=1;i<=k;i++){
            int x=i;
            for(int j=2;j*j<=x;j++){
                while(x%j==0){
                    s[j]-=1;
                    x/=j;
                }
            }
            if(x!=1) s[x]-=1;
        }
        for(int i=1;i<=n-k;i++){
            int x=i;
            for(int j=2;j*j<=x;j++){
                while(x%j==0){
                    s[j]-=1;
                    x/=j;
                }
            }
            if(x!=1) s[x]-=1;
        }
        long long ans = 1;
        for(int i = 2; i <= 500; ++i){
            if(s[i] > 0) ans *= (s[i] + 1);
            }
        cout << ans << endl;
    }
    return 0;
}