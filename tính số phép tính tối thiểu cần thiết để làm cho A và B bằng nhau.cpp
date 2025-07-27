#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int A,B;
        cin >> A >> B;
        int diff=abs(B-A);
        if(diff==0){
            cout << 0 << endl;
            continue;
        }
        int k=0;
        while(true){
            k++;
            if( k*(k+1)/2 >= diff && (k*(k+1)/2-diff) %2 ==0){
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}