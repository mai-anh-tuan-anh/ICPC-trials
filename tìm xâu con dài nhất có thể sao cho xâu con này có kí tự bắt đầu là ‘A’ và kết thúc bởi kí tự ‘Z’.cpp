#include <bits/stdc++.h>
using namespace std;
int main(){
    int A=-1,Z=-1;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            A=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='Z'){
            Z=i;
            break;
        }
    }
    cout << (A!=-1 && Z!=-1 && Z>A) ? Z-A+1 : 0;
}