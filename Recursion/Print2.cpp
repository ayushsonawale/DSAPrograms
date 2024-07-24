#include<bits/stdc++.h>
using namespace std;

void Print(int n,int i){
    if(n < i) return;

    cout<<n<<endl;
    Print(n-1,i);
}
int main(){
    int n;
    cin>>n;

    Print(n,1);
    return 0;
}