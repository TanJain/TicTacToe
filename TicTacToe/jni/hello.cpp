
#include <iostream>
using namespace std;
int main()
{
	//Creating Game grid
	char grid[7][7];
	for(int i =0;i<7;i++){
		for(int j =0;j<7;j++){
			grid[i][j]=' ';
			if(j%2==0){
				grid[i][j]='|';
			}
			if(i%2==0){
				grid[i][j]='-';
			}
		}
	}
	//Choosing Symbols
	int t=0;
	char turn[2];
	cout<<"Enter First player's symbol\n";
	cin>>turn[0];
	cout<<"Enter Second player's symbol\n";
	cin>>turn[1];
	// move coordinate
	int coord[2];
	//Game loop
	while(1){
		for(int k=0;k<7;k++){
			for(int l=0;l<7;l++){
				cout<<grid[k][l];
			}
			cout<<endl;
		}
		cout<<"Player "<<t+1<<"'s Move\n";
		while(1){
			cin>>coord[0];
			cin>>coord[1];
			if(coord[0]>0&&coord[0]<4&&coord[1]>0&&coord[1]<4&&grid[(coord[0]*2)-1][(coord[1]*2)-1]==' '){
				grid[(coord[0]*2)-1][(coord[1]*2)-1]=turn[t];
				break;
			}
			else{
				cout<<"Invalid move try again\n";
			}
			
		}
		t=!t;
	}
	
}
