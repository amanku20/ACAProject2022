#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d,p,q,e;
    cin>>n>>d;
    for(p=2;p<=n/2;p++){
        if(n%p==0) break;
    }
    q= n/p;
    int x= (p-1)*(q-1);
    for(int y=1;y<=x;y++){
        if((y*x+1)%d==0){
            e= (y*x+1)/d;
            break;
        }
    }
    cout<<e<<endl;
    return 0;
}