#include<bits/stdc++.h>
using namespace std;

int Sum(int i){
    if(i == 0) return 0;
    
    return i + Sum(i - 1);
}

int main(){
    int n;
    cin>>n;

    cout<<Sum(n)<<endl;
    return 0;
}