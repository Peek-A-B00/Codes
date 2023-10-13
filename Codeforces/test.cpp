
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include<set>
#include <unordered_map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator, (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;

#define en "\n"
#define sp(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    string s;;
    while(cin>>s)
    {
        int l=s.size();
        int t=s[l-1]-'0';
        deb(t);
        if(t==9 && l==1){
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include<set>
#include <unordered_map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator, (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;

#define en "\n"
#define sp(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 100010;
int n,ar[Size];
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    ar[n]=ar[0];
    int f=0;
    for(int i=1;i<n;i+=2)
    {
        if(f==1)
            break;
        if(ar[i]>ar[i-1] && ar[i]>ar[i+1] || ar[i]<ar[i-1] && ar[i]<ar[i+1])
            continue;
        else if(i+1==n) f=1;
        else
        {
            for(int j=i+1;j<n;j++){
                if(ar[i]<ar[j]){
                    swap(ar[i],ar[j]);
                    break;
                }
                else if(ar[i]>ar[n-1] )
                {
                    f=1;
                    break;
                }
            }
        }

    }
    if(n%2==1 && !f)
    {
        if(!(ar[n-1]>ar[n-2] && ar[n-1]>ar[0]))
            f=1;
    }
    if(f==1)
        cout<<"No";
    else{
        cout<<"Yes"<<en;
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
    }
    cout<<en;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        solve();
//        printf("Case %d: ",ks++);
    }


    return 0;
}

            cout<<s;
            continue;
        }
        else if(t>4)
        {
            t = 9 - t;
            s[l-1] = t + '0';
            deb(s[l-1]);
        }
//        s[l]='/0';
        deb(s);
        cout<<3<<en;
//        printf("\n");
    }

    return 0;
}
