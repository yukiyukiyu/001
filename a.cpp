/*************************************************************************
    > Author: sadjlksajdlsajdlksaj
    > ################### 
    > Mail: ################### 
    > Created Time: Sun 27 Dec 2015 05:38:09 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<cstring>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<cstdlib>
#include<ctime>
#include<set>
using namespace std;
 /*MACRO*/
#define FORi(l,r) for(int i=(l);i<(r);i++)
#define FORj(l,r) for(int j=(l);j<(r);j++)
#define FORk(l,r) for(int k=(l);k<(r);k++)
#define MEMSET0(i) memset((i),0,sizeof((i)))
#define MEMSET1(i) memset((i),-1,sizeof((i)))
long long fib(int a)
{
    int i,fibarr[50];
    fibarr[1]=1;
    fibarr[2]=1;
    for(i=3; i<=a; i++)
        fibarr[i]=fibarr[i-1]+fibarr[i-2];
    return fibarr[a];
}   

int main(void)
{
    for(int i = 1; i <= 10; i ++)
    printf("%d\n", fib(i));
    return 0;
}
