#include<stdio.h>
int n;
int t;
int ans;
int MAX=-1;
int MIN=0x3f3f3f3f;
int MAX_INDEX;
int MIN_INDEX;
int main(int argc, char *argv[])
{
    //freopen("1398.in", "r", stdin);
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    while(~scanf("%d",&n)){
        MAX=-1;
        MIN=0x3f3f3f3f;
        ans=0;
        int i;
        for(i=1;i<=n;++i)
        {
            scanf("%d",&t);
            if(t<MIN){
                MIN=t;
                MIN_INDEX=i;//最小的i
            }
            if(t>=MAX)
            {
                MAX=t;
                MAX_INDEX=i;//相同最大值的情况下，最大的下标 坑
            }
        }
        // cout<<"MIN_INDEX is "<<MIN_INDEX
        //     <<"MAX_INDEX is "<<MAX_INDEX
        //     <<"\n";
        if(MIN_INDEX<MAX_INDEX){
            ans=MIN_INDEX+n-1-MAX_INDEX;
        }
        else
        {
            ans=MIN_INDEX+n-1-MAX_INDEX-1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
