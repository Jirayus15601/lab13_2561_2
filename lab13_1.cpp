#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
//Write your code here.
	for(int i = 0 ; i < N ; i++){
		if(i >= 1){
			int a = i;
			for(int j = 0 ; j < N ; j++){
				if(j == i){
					cout << "[" << d[j] << "]" << " " ;
				}else{
					cout << d[j] << " ";
				}
			}
			int b = i;
			while(b > 0){
				if(d[b] > d[b-1]){
					swap(d,b,b-1);
				a--;
				}
				b--;
			}
			if(i>=1){
				cout << " ==> ";
				for(int c = 0 ; c < N ;c++){
					if(c == a){
						cout << "[" << d[c] << "]" << " ";
					}else{
						cout << d[c] << " ";
					}
				}
				cout << "\n";
			}
			
		}
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
