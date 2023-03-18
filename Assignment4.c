//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include <stdio.h>
int main() {
    int max,i,j;
    int threeMatrix[3][3]={
        {-1,2,-3},
        {-4,-5,-6},
        {7,8,9}
    };
    for(i=0;i<3;i++){
        max = threeMatrix[i][0];
        for(j=0;j<3;j++){
            if(max<=threeMatrix[i][j]){
                max=threeMatrix[i][j];
            }
        }
        printf("Maximum element in row %d = %d\n", i+1, max);
    }
    return 0;
}
