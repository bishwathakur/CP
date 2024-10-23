#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,r;cin>>n>>r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>1){
                int sum=0;
                sum=a[i]/2;
                count=count+sum;
                a[i]-=sum*2;
            }
        }
        int left=0;
        for (int i = 0; i < n; i++){
            left+=a[i];
        }
        int rowleft=r-count;
        if(rowleft>=left){
            cout<<count*2+left<<endl;
        }else{
            cout<<count*2+(2*rowleft-left)<<endl;
        }
        
    }
}