//
// Created by 86139 on 2020/1/2.
//

#ifndef LEETCODE_REVERSALNUMBER_H
#define LEETCODE_REVERSALNUMBER_H

#include <cmath>
#include <stdio.h>

int reverse(int x) {

    long max=2147483647;
    long min=-2147483648;
    if(x>max||x<min){
        return 0;
    }

    int digit;//位数
    int i = 1;
    int j = 1;
    int m;
    int a[33];//先假设最多3位数

    if (x >= 0) {
        m = x;
    } else m = -x;

    digit = log10(m) + 1;//可以不用digit计算，直接用while语句
    //printf("%d\n", digit);

    if (x < 0) {                //放置的位置??
        printf("-");
    }

    for (j = 1; j < digit + 1; j++) {//输入的次数(直接存数据的时候就是从后往前！！不能用while语句，会让最后一步变成错误的
        a[i] = m % 10;
        m = m / 10;
        //printf("%d", a[i]);
        i++;
    }
    printf("\n");

    i = 1;
    int countnum = 0;
    while (a[i] == 0) {
        i++;
        countnum++;
    }
    //printf("%d\n",countnum);
    //printf("%d\n",a[3]);

/*
    for(j=i;j<digit+1;j++){
        printf("%d\t",a[j]);
    }
*/

    int n = 0;//用来作最后的返回值
    int mid;//中间变量
    mid=digit;
    for (j = 1; j < digit + 1; j++) {
        n = a[j] *pow(10,mid-1)+n;
        mid--;
    }
    //printf("%d\n",n);


//那当末尾有0？对输出作调整吧.只有开头使用？如果中间有0怎么办？只对结果筛选是选不出来的？
//如果呗10整除。递归？如果开头为0，不输出。只输出之后的?最后的0都要去掉。唔。对开头进行筛选？
    return n;
}


#endif //LEETCODE_REVERSALNUMBER_H
