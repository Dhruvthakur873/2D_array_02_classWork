// going to code matrix multiplication program
#include<bits/stdc++.h>
using namespace std;
int main(){
int row1,col1;
cout<<"Enter row and column of first matrix: ";
cin>>row1>>col1;
cout<<"Enter the elements of first matrix : ";
int matrix1[row1][col1];
for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>matrix1[i][j];
    }
}
int row2,col2;
cout<<"Enter row and column of first matrix: ";
cin>>row2>>col2;
int matrix2[row2][col2];
cout<<"Enter the elements of second matrix : ";
for(int i=0;i<row2;i++){
    for(int j=0;j<col2;j++){
        cin>>matrix2[i][j];
    }
}
int ansMatrix[row1][col2];
for(int i=0;i<row1;i++){
    for(int j=0;j<col2;j++){
        int sumOfelements =0;
        for(int k=0;k<col1;k++){
            sumOfelements +=matrix1[i][k]*matrix2[k][j];
        }
        ansMatrix[i][j] = sumOfelements;
    }
}
for(int i=0;i<row1;i++){
    for(int j =0;j<col2;j++){
        cout<<ansMatrix[i][j]<<"  ";
    }cout<<endl;
}
}