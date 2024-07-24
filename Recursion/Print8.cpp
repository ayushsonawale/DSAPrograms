#include<bits/stdc++.h>
using namespace std;

bool Palimdrom(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;

    return Palimdrom(i+1,s);
}

int main(){
    string s;
    cin>>s;
    
    cout<<Palimdrom(0,s)<<endl;
    return 0;
}