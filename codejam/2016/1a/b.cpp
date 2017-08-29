#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int t,number[2600],n,tmp;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        memset(number,0,sizeof(number));
        for(int j=0;j<(2*n-1)*n;j++){
            scanf("%d",&tmp);
            number[tmp]++;
        }
        printf("Case #%d: ",i);
        for(int j=1;j<=2500;j++){
            if(number[j]%2 == 1)
                printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
