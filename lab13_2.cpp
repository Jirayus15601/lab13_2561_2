#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double x[N][N]){
	for(int i = 0 ; i < N ; i++){
		cout << "ROW " << i+1 << " : ";
		for(int j = 0 ; j < N ; j++){
			cin >> x[i][j];
		}
	}
}
void findLocalMax(const double x[N][N], bool y[N][N]){
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			y[i][j] = false;
		}
	}
	for(int i = 1 ; i < 4 ; i++){
		for(int j = 1 ; j < 4 ; j++){
			if(x[i][j] >= x[i-1][j] and x[i][j] >= x[i+1][j] and x[i][j] >= x[i][j-1] and x[i][j] >= x[i][j+1]){
				y[i][j]=true;
			}else{
				y[i][j]=false;
			}
		}
	}
}
void showMatrix(const bool y[N][N]){
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			cout << y[i][j] << " ";
		}
		cout << "\n";
	}
}

