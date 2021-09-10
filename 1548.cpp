// 제품 생산량 순위 구하기
// get rank of product output
// 각 회사들의 휴대폰 판매량이 집계되었다. 이번에 각 회사들에서
// 판매한 휴대폰의 순위를 구하고자 여러분에게 의뢰가 들어왔다.
// 따라서 여러분은 판매량 순위를 구하는 프로그램을 작성해야 한다.
// 즉, 각 회사별 휴대폰 판매량이 주어지면, 각 회사의 순위를 구하는
// 프로그램을 작성하시오. 단, 같은 판매량의 회사가 있는 경우는 모두
// 그 순위가 같다.
# include <iostream>
int i,j,n,d[2010],r[2010]={};
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&d[i]);
    for(i=1;i<=n;i++)
        for(r[i]=1,j=1;j<=n;j++)
            if(d[i]<d[j])
                r[i]++;
    for(i=1;i<=n;i++)
        printf("%d\n",r[i]);
}