#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tot;
    int target = 9;
    int twoSum[4] = {2, 7, 11, 15};
    tot = sizeof(twoSum) / sizeof(twoSum[0]);
    for(int i = 0; i < tot; i++){
        for(int j = i + 1; j < tot; j++){
            if(twoSum[i] + twoSum[j] == target){
                printf("Index: %d, %d\n", i, j);
            }
        }
    }

    return 0;
}