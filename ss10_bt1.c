#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[2][3]={{1,2,3},{4,5,6}};
    int num;
    printf("hãy nhập số mà bạn muốn kiểm tra : ");
    scanf("%d",&num);
    for(int i= 0; i<2;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==num){
                printf("a[%d][%d]",i,j);
            }
        }
    }
    return 0;
}
