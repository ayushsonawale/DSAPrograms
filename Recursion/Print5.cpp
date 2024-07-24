#include<bits/stdc++.h>
using namespace std;

void Sum(int i,int sum){
    if(i < 1){
        cout<<sum<<endl;
        return;
    }
    Sum(i - 1, sum + i);
}

int main(){
    int n;
    cin>>n;

    Sum(n,0);
    return 0;
}