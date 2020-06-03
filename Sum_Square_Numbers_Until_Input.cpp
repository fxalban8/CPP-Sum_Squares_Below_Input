#include <iostream>
using namespace std;


int sum_Squares_below(int n);


int main(){
	
	int x;
	cout<<"Enter a number: "<<flush;
	cin>>x;
	
	cout<<"The sum of the squares of all the positive numbers below the entered one is "<<sum_Squares_below(x)<<endl;
	return 0;
}

int sum_Squares_below(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i*i;
	}
	return sum;

}
