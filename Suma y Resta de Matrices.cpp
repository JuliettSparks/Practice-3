#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
int main(){
int n;
  srand(time(NULL));
cout<<"Dame el tama"<<char(164)<<"o de la matriz"<<endl;
  cin>>n;
  int  A[n][n],B[n][n],C[n][n],D[n][n];
  for( int i=0;i<n;i++){
     for(int j=0;j<n;j++){
          	A[i][j]=1+rand()%10;
      }
  }
   for( int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            B[i][j]=1+rand()%10;
      }
   }
 for( int i=0;i<n;i++){
     for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
            D[i][j]=A[i][j]-B[i][j];
      }
 }
 cout<<"Suma de Matrices\n";
 for( int i=0;i<n;i++){
     for(int j=0;j<n;j++){
            //cout<<"["<<C[i][j]<<"]"<<endl;
            printf("[%d][%d]\n",C[i][j]);
      }
  }
cout<<"Resta de Matrices\n";
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		//cout<<"["<<D[i][j]<<"]"<<endl;
		printf("[%d][%d]\n",D[i][j]);
	}
}
}
