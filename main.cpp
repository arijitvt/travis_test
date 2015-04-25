#include <iostream>
#include <string>


using namespace std;


int sum(int a,int b) {
	return a+b;
}

int main() {
	int i = 100;
	int j = 200;

	int result = sum(i,j);

	cout<<"Result:"<<result<<endl;

	return 0;

}
