#include<iostream>

using namespace std;

class matrix{
	private:
		int a[3][3];
	public:
		int& operator()(int i,int j){
			
			return(a[i][j]);
		}
		
	void print(){
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
			cout<<a[i][j]<<" ";
			}
		cout<<endl;
		}
	}
	
};


int main(){
	matrix m;
	
	m(0,0)=1;
	m(0,1)=2;
	m(0,2)=3;
	m(1,0)=4;
	m(1,1)=5;
	m(1,2)=6;
	m(2,0)=7;
	m(2,1)=8;
	m(2,2)=9;
	
	m.print();
	
	
	return 0;			
}
