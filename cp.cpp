#include <iostream>
using namespace std;

int main() {
	int k=4;
		for(int i=0;i<5;i++) {
			for(int j=0;j<k;j++)
				cout<<(" ");
			for(int j=0;j<i+1;j++)
				cout<<("* ");
			cout<<("\n");
			k--;
		}
		k=0;
		for(int i=5;i>0;i--) {
			for(int j=0;j<k;j++)
				cout<<(" ");
			for(int j=0;j<i;j++)
				cout<<("* ");
		 		cout<<("\n");
			k++;
		}

}
