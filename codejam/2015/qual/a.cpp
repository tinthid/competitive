#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<climits>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,sum_invite=0,sum_aud=0;
        char aud[1001];
        scanf("%d%s",&n,aud);
        sum_aud = aud[0] - '0';
        for(int j=1;j<=n;j++){
            //printf("%d %d %d\n",j,sum_invite,sum_aud);
            if(sum_aud < j){
                sum_invite += j-sum_aud;
                sum_aud += (aud[j] - '0')+(j-sum_aud); 
            }else{
                sum_aud += (aud[j] - '0'); 
            }
            // printf("%d\n",j);
        }
        printf("Case #%d: %d\n",i,sum_invite);
    }
    return 0;
}
