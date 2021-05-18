#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    vector<int> arr(a);
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    vector<int> narr(b);
    for(int i=0;i<b;i++)
    {
        cin>>narr[i];
    }
    map<int,int> m1;
    map<int,int> m2;
    for(int i=0;i<a;i++)
    {
        m1[arr[i]]++;
    }
    for(int i=0;i<b;i++)
    {
        m2[narr[i]]++;
    }
    set<int> s;
    for(int i=0;i<narr.size();i++)
    {
        s.insert(narr[i]);
    }
    for(auto x:s){
        if(m1[x]!=m2[x])
        {
            cout<<x<<" ";
        }
    }
    cout<<endl;
    return 0;
}