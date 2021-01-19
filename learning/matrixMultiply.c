// program for multiplication of 3x3 matrix  
# include <stdio.h>
const int r = 3;
const int c = 3;

void multiply(int matA[r][c], int matB[r][c], int matC[r][c]){
    int i,j;
    for(i= 0; i<r;++i){
        int k ;
        for (k = 0; k <c; ++k){
            matC[i][k] = 0;
        for(j=0; j<c;++j){
             matC[i][k] += matA[i][j] * matB[j][i];
        }
        }
    }
}

void getMatrix(int mat[r][c]){
    printf("%s", "Enter 3x3 matrix: ");
    int i,j;
    for(i =0; i<r;++i){
        for(j= 0; j<c;++j){
            scanf(" %d",&mat[i][j]);
        }
    }
}

void printMatrix(int mat[r][c]){
    printf("\n\n");
    int i,j;
    for (i =0; i<r; ++i){
        for(j = 0; j<c; ++j){
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
 printf("\n\n");
}



int main(){
    int matA[r][c], matB[r][c], matC[r][c];
    getMatrix(matA);
    getMatrix(matB);
    multiply(matA, matB, matC);
    printMatrix(matC);

    return 0;
}
