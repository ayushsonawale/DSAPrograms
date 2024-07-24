#include<bits/stdc++.h>
using namespace std;

void explainVectors(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);


    for(auto it = v.begin(); it != v.end(); it++){
        cout <<*(it)<<" ";
    }
    cout<<endl;
    cout<<v[0]<<endl;
}

int main(){
    explainVectors();
    return 0;
}