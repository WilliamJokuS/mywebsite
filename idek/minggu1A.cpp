  #include <bits/stdc++.h>
using namespace std;
struct titik{
    double x,y;
    int ppl;
};
bool compare(titik a,titik b){
    double rada=sqrt(a.x*a.x+a.y*a.y),radb=sqrt(b.x*b.x+b.y*b.y);
    if (rada<radb)return true;
    return false;
}
int n,s;
titik kota[1005];
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        cin>>kota[i].x>>kota[i].y>>kota[i].ppl;
    }
    sort(kota+1,kota+n+1,compare);
    for(int i=1;i<=n;i++){
        s+=kota[i].ppl;
        if(s>=1000000){
            cout<<fixed<<setprecision(7)<<sqrt(kota[i].x*kota[i].x+kota[i].y*kota[i].y)<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
