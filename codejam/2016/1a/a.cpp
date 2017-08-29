#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) {
        char str[1001];
        scanf("%s",str);
        string ans;
        ans += str[0];
        for(int j=1;j<strlen(str);j++){
            if (str[j] >= ans.at(0))
                ans = str[j] + ans;
            else
                ans = ans + str[j];
        }
        printf("Case #%d: %s\n",i,ans.c_str());
    }
    return 0;
}
