 #include<iostream>
using namespace std;

int main(){
	int nA,nB;
	int *A,*B,**C;	
	
	cout << "Length of A: ";
	cin >> nA;
	
	A = new int[nA];
	cout << "Input Array A: ";
	for(int i=0; i < nA; i++) cin >> A[i];
	
	cout << "Length of B: ";
	cin >> nB;
	
	B = new int[nB];
	cout << "Input Array B: ";
	for(int j=0; j < nB; j++) cin >> B[j];
	
	C = new int*[nA];
	for(int i=0; i < nA; i++) C[i] = new int[nB] ;
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
	for(int i=0; i < nA; i++){
		for(int j=0; j < nB; j++) {
			int C = A[i]*B[j];
		}
	}
	
	cout << "\t";
	for(int j=0; j < nB; j++){
		cout << B[j] << "\t";
	}
	cout << "\n-----------------------------\n";
	
	for(int i=0; i < nA; i++){
		cout << A[i] << "\t";
		for(int j=0; j < nB; j++) {
			cout << A[i]*B[j] << "\t";
		}
		cout << "\n";
	}
     delete A,B,C; 

	return 0;
}
