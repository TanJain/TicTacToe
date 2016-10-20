
#include <iostream>
using namespace std;
int main()
{
	//Declarations
	int win =0; // 1 if anybody wins else 0
	int t =0; // Determines whose turn it is player if 0 , else player 2
	char turn[2]; //Stores Symbol used by user to play the game
	char grid[7][7];// Game grid
	int coord[2]; // Stores Move coordinates
	//Creating Game grid
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
	cout<<"Enter First player's symbol\n";
	cin>>turn[0];
	cout<<"Enter Second player's symbol\n";
	cin>>turn[1];
	//Game loop
	while(1){
		
		//Priting game
		for(int k=0;k<7;k++){
			for(int l=0;l<7;l++){
				cout<<grid[k][l];
			}
			cout<<endl;
		}
		//Checking if anyone won
		if(win){
			cout<<"Player "<<(!t)+1<<" Wins\n";
			break;
		}
		cout<<"\nPlayer "<<t+1<<"'s Move\n";
		// Taking move coordinates
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
		// Checking rows & columns
		for(int c=1;c<6;c+=2){
				if((grid[c][1]==grid[c][3]&&grid[c][3]==grid[c][5])&&grid[c][1]!=' '){
					win++;
				}
				if((grid[1][c]==grid[3][c]&&grid[3][c]==grid[5][c])&&grid[1][c]!=' '){
					win++;
				}
		}
		//Checking Diagnols
		if(grid[3][3]!=' '){
			if(grid[3][3]==grid[1][1]&&grid[1][1]==grid[5][5]){
				win++;
			}
			else if(grid[3][3]==grid[1][5]&&grid[1][5]==grid[5][1]){
				win++;
			}
		}
		// Next turn Changing player number
		t=!t;
	}
	return 0;
	//Author - Tanmay Jain
	
}
