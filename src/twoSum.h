//
// Created by 86139 on 2020/1/2.
//

#ifndef LEETCODE_TWOSUM_H
#define LEETCODE_TWOSUM_H

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    int i, j;
    int *returnarray = (int *) malloc(sizeof(int) * 2);
    for (i = 0; i < numsSize - 2; i++) {
        for (j = i + 1; j < numsSize - 1; j++) {
            if (nums[i] + nums[j] == target) {
                returnarray[0] = i;
                returnarray[1] = j;
                *returnSize = 2;
                return returnSize;
            }
        }
    }
    return 0;
}
//主函数main
/*    int *nums;
    int numsSize;
    int target;
    int *returnSize;

    int a[4]={2,7,11,5};
    nums = a;
    numsSize = 4;
    target = 9;

    int* p = twoSum(nums,numsSize,target,returnSize);

    printf("%d\t%d",*p,++*p);*/
#endif //LEETCODE_TWOSUM_H
