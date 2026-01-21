#include <stdio.h>

int main() {
    const int nums[] = {0,1,2,3};
    const int size = sizeof(nums) / sizeof(nums[0]);
    int sum = 0;

    for (int i = 0; i < size; i++){
        sum += nums[i];
    }

    printf("Sum of the array is %d.\n", sum);
    return 0;
}
