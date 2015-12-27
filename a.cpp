/*************************************************************************
    > File Name: a.cpp
    > Author: VOID_133
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

int fib(int a)
{
    if( a <= 2 )
        return 1;
    else
        return fib(a - 1) + fib(a - 2);
}

int main(void)
{
    for(int i = 1; i <= 10; i ++)
    printf("%d\n", fib(i));
    return 0;
}
