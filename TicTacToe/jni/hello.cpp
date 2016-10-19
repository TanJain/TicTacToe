
#include <iostream>
using namespace std;
int main()
{
	char grid[7][7];
	for(int i =0;i<7;i++){
		for(int j =0;j<7;j++){
			grid[i][j]='.';
			if(j%2==0){
				grid[i][j]='|';
			}
			if(i%2==0){
				grid[i][j]='-';
			}
		}
	}
	for(int k=0;k<7;k++){
		for(int l=0;l<7;l++){
			cout<<grid[k][l];
		}
		cout<<endl;
	}
	
}
