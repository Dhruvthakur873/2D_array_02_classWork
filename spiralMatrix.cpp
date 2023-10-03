//print the matrix in wave form;
#include<bits/stdc++.h>
using namespace std;
int main(){
int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

int minrow=0,mincol=0,maxrow=3,maxcol=3;


while(minrow<=maxrow  && mincol<=maxcol){
    //right
    if(minrow<=maxrow  && mincol<=maxcol){
        for(int j =mincol;j<=maxcol;j++){
            cout<<(matrix[minrow][j]);
        }        
        minrow++;
    }
    //down
    if(minrow<=maxrow  && mincol<=maxcol){
        for(int j = minrow; j <= maxrow; j++) {
            cout << matrix[j][maxcol] << "  ";
        }
        maxcol--;
    }
    //left
    if(minrow<=maxrow  && mincol<=maxcol){
        for(int j = maxcol;j>=mincol;j--){
            cout << matrix[maxrow][j] <<" ";
        }
        maxrow--;
    }
    //up
    if(minrow<=maxrow  && mincol<=maxcol){
        for(int i = maxrow;i>=minrow;i--){
            cout << matrix[i][mincol]<<" ";
        }
        mincol++;
    }
}


}