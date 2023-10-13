#include<bits/stdc++.h>
using namespace std;

#define en "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);

    int tsk;
    cin>>tsk;
    while(tsk--)
    {
        vector<int>sut(3);

        for(auto &n:sut)
            cin>>n;
        int l,w,H;
        cin>>l>>w>>H;

        sort(sut.begin(),sut.end());

        int r=INT_MAX;

        int a,b;
        do
        {
            if(H>sut[0])
                continue;

            a=0,b=0;
            int h=H,s1=sut[1],s2=sut[2];

            while(h*2<=sut[0])  h*=2,a++;
            while(s1<l)   s1*=2,b++;
            while(s2<w)   s2*=2,b++;

            if(a>=b)
                r=min(r,b);
//            cout<<r<<endl;

        }while(next_permutation(sut.begin(),sut.end()));
        if(r==INT_MAX)
            cout<<-1<<en;
        else
            cout<<r<<en;
    }
    return 0;
}
