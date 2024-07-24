#include<bits/stdc++.h>
using namespace std;

int Fact(int i){
    if(i == 0) return 1;
    
    return i * Fact(i -1);
}

int main(){
    int n;
    cin>>n;

    cout<<Fact(n)<<endl;
    return 0;
}