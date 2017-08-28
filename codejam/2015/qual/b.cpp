#include<cstdio>
#include<cmath>
#include<algorithm>
#define INF (int)1e9
using namespace std;
int main(){
    int t,min_time;
    int arr[1001];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,move;
        min_time=INF;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
            scanf("%d",&arr[j]);
        for(int j=1;j<=1000;j++){
            move = 0;
            for(int k=0;k<n;k++){
                move += (arr[k]-1)/j;           
            }
            min_time = min(move+j,min_time);
        }
        printf("Case #%d: %d\n",i,min_time);
    }
    return 0;
}
