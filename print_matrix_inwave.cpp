//print the matrix in wave form;
#include<bits/stdc++.h>
using namespace std;
int main(){
int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            if(i%2!=0){
                int l=0;
                int m = 2;
                while(l<=m){
                    swap(array[i][l],array[i][m]);
                    l++;
                    m--;
                }                
            }

        }        
    }
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<array[i][j]<<"  ";
        }
    }
}