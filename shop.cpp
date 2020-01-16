#include<stdio.h>
#include<limits.h>
    char a[29][29];
    int time[28][28];
    int min;
    int row , col,desi,sori,desj,sorj;
void find(int i,int j,int cur_time);
 
int main(){
    int i,j;
    int temp1,temp2;
    while(1){
        min=INT_MAX;
        for(i=0;i<28;i++) for(j=0;j<28;j++) time[i][j]=INT_MAX;
        scanf("%d %d",&col,&row);
        if(row==0 && col==0) break;
        getchar();
        temp1=row+1;
        temp2=col+1;
        for(i=0;i<=temp1;i++){
            a[i][0]='X';
            a[i][temp2]='X';
        }
        for(i=0;i<=temp2;i++){
            a[temp1][i]='X';
            a[0][i]='X';
        }
         
        for(i=1;i<=row;i++){
            for(j=1;j<=col;j++){
                scanf("%c",&a[i][j]);
                if(a[i][j]=='S') {
                    sori=i;
                    sorj=j;
                }
                if(a[i][j]=='D'){
                    desi=i;
                    desj=j;
                }
            }
            getchar();
        }
    /*  for(i=0;i<=temp1;i++){
            for(j=0;j<=temp2;j++)
                printf("%c",a[i][j]);
            printf("\n");
        }*/
        find(sori,sorj,0);
        printf("%d\n",min);
    }
    return 0;
}
void find(int i,int j,int cur_time){
    if (cur_time>=min) return ;
    if(cur_time>=time[i][j]) return ;
    else time[i][j]=cur_time;
    if(a[i+1][j]=='D' || a[i][j+1]=='D' || a[i-1][j]=='D' || a[i][j-1]=='D'){
        min=cur_time;
        return ;
    }
    if(a[i+1][j]!='X') find(i+1,j,(cur_time+a[i+1][j]-48));
    if(a[i][j+1]!='X') find(i,j+1,(cur_time+a[i][j+1]-48));
    if(a[i-1][j]!='X') find(i-1,j,(cur_time+a[i-1][j]-48));
    if(a[i][j-1]!='X') find(i,j-1,(cur_time+a[i][j-1]-48));
    return ;
}