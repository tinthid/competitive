#include<cstdio>
#include<algorithm>
using namespace std;
bool is_richard_win(int x,int r,int c){
    int max_len = max(r,c);
    int min_len = min(r,c);
    if((max_len * min_len)%x != 0)
        return true;
    if(min_len == 1 && x >= 3)
        return true;
    if(min_len <= 2 && x >= 4)
        return true;
    if((min_len <= 2 || (max_len == 5 && min_len == 3)) && x == 5)
        return true;
    if(min_len <=3 && x==6)
        return true;
    if(x >= 7)
        return true;
    return false;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int x,r,c;
        scanf("%d %d %d",&x,&r,&c);
        printf("Case #%d: %s\n",i,is_richard_win(x,r,c) ? "RICHARD" : "GABRIEL");
    }
    return 0;
}
