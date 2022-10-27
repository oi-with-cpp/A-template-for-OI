//Template By (HMS_Cheshire)小柴郡喵喵喵
#include<bits/stdc++.h>
using namespace std;
using lll = __int128;
using ll = long long;
namespace Mashiro {
    char buf[1<<18],*p1=buf,*p2=buf;
    inline int getc() {
        return p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<18,stdin),p1==p2)?EOF:*p1++;
    }
    template<typename T>inline void read(T& x) {
        x=0;int f=1;
        char ch=getc();
        while(!isdigit(ch)){if(ch=='-')f=~f+1;ch=getc();}
        while (isdigit (ch)) {x=(x<<3)+(x<<1)+(ch^48);ch=getc();}
        x*=f;
    }
    template <typename T,typename... Args> inline void read(T& x, Args&... args) {
        read(x);
        read(args...);
    }
    char buffer[1<<18];int p11=-1;const int p22=(1<<18)-1;
    inline void flush() {fwrite(buffer,1,p11+1,stdout),p11=-1;}
    inline void putc(const char &x) {if (p11==p22) flush();buffer[++p11]=x;}
    template<typename T>inline void write(T x) {
        static int buf[40],top=0;
        if(x<0)putc('-'),x=~x+1;
        while(x)buf[++top]=x%10,x/=10;
        if(top==0)buf[++top]=0;
        while (top) putc(buf[top--]^48);
        putc(' ');
        flush();
     }
     template <typename T,typename... Args> inline void write(T x, Args... args) {
         write(x);
         write(args...);
     }
}
using namespace Mashiro;
namespace Misaka{//Debug
    auto seed=std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rnd(seed);
    template<typename T>T random(T l, T r) {// [-INTMAX,INTMAX]
    	 return std::uniform_int_distribution<T>(l,r)(rnd); 
    }
    template<typename ItType>inline void Array_Print(ItType __first,ItType __end){
        for(ItType it=__first;it!=__end;++it)write(*it);
        putc('\n');
    }
    #define Time(T) while((double)clock()/CLOCKS_PER_SEC<T) 
    #define Pause cout<<endl;system("pause");
}
namespace Saratoga{//Operatoration On Array 
    //Process by Boring314
    template <typename IteratorTYPE, typename _Compare>inline vector<int> Discretization(IteratorTYPE __first, IteratorTYPE __last, _Compare __comp) {
        typedef typename iterator_traits<IteratorTYPE>::difference_type _DistanceType;
        typedef typename iterator_traits<IteratorTYPE>::value_type _ValType;
        int __len = distance(__first, __last);
        vector<_ValType> Discretization_Temp(__len);
        Discretization_Temp.clear();
        for (auto it = __first; it != __last; ++it) {
            Discretization_Temp.push_back(*it);
        }
        vector<int> Rank(__len + 1);
        Rank.clear();
        sort(Discretization_Temp.begin(), Discretization_Temp.end(), __comp);
        auto new_end = unique(Discretization_Temp.begin(), Discretization_Temp.end());
        auto st = __first;
        for (int i(1); i <= __len; ++i) {
            Rank[i] = lower_bound(Discretization_Temp.begin(), new_end,*st, __comp) - Discretization_Temp.begin() + 1;
            ++st;
        }
        return Rank;
    }
}
namespace Cmp{
    template<typename T>inline T Min(T a,T b){
        return a>b?b:a;
    }
    template<typename T,typename... Args> inline T Min(T a,T b,Args... args){
        return Min(a,Min(b,args...));
    }
    template<typename T>inline T Max(T a,T b){
        return a>b?a:b;
    }
    template<typename T,typename... Args> inline T Max(T a,T b,Args... args){
        return Max(a,Max(b,args...));
    }
}
namespace HMS_Cheshire{//Math
    template<typename T>inline T gcd(T a,T b){
        return b==0?a:gcd(b,a%b);
    }
    template<typename T,typename... Args>inline T gcd(T a,T b,Args... args){
        return gcd(gcd(a,b),args...);
    } 
    template<typename T>inline T lcm(T a,T b){
        return a*b/gcd(a,b);
    }
    template<typename T,typename... Args>inline T lcm(T a,T b,Args... args){
        return lcm(lcm(a,b),args...);
    }
    template<typename T>inline T ksm(T a,T b,T p){
        T res=1;
        while(b){
            if(b&1)res=res*a%p;
            a=a*a%p;
            b>>=1;
        }
        return res%p;
    }
    vector<int> Get_Prime(int n){
        vector<int>vis(n+1);
        vector<int>prime;
        for(int i(2);i<=n;++i){
            if(vis[i]==0){
                prime.emplace_back(i);
            }
            for(auto j:prime){
                if(j*i>n)break;
                vis[i*j]=1;
                if(i%j==0)break;
            }
        }
        return prime;
    }
}
int main() {
    
    return 0;
}
