#include <iostream>
#include <limits>
using namespace std;


int sum_Squares_below(int n);
void controlInput(int& n);

int main(){
	
	int x;
	cout<<"Enter a number: "<<flush;
	cin>>x;

	while(!cin||x<0){
		controlInput(x);
	}


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

void controlInput(int& n){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout<<"Enter a correct value: "<<flush;
	cin>>n;
}


