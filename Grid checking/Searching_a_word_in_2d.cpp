#include<iostream>
#include<string>


using namespace std;

//I have defined the the size of my 2D grid already, I could have taken the size input from user too!!
#define R 28           
#define C 28

	//To search in all the 8 directions:
	int x[]={-1,-1,-1,0,0,1,1,1};
	int y[]={-1,0,1,-1,1,-1,0,1};
	
	bool search_grid(char grid[R][C], int row, int column, string word)   //UDF to search in all the 8 directions from point
	{
		if(grid[row][column]!=word[0])
		return false;
		
		int len=word.length();
		
		for(int direction=0;direction<8;direction++) //searching word in all directions from (row,columns)
		{
		 int k;
		 int row_direction = row + x[direction];
		 int column_direction = column + y[direction];
		 
		 for(k=1;k<len;k++)
		 {
		 	//condition for out of bound
		 	if(row_direction>=R || row_direction<0 || column_direction>=C || column_direction<0)
		 	break;
		 	
		 	//condition for not matching
		 	if(grid[row_direction][column_direction]!=word[k])
		 	break;
		 	
		 	row_direction+=x[direction];
		 	column_direction+=y[direction];
		 	
		 }
		 //checking the lenght of the word if all characters are matched
		 if(k==len)
		 return true;
	}
	return false;
}
	void pattern_search(char grid[R][C], string word)
	{
		for(int row=0;row<R;row++)
		for(int col=0;col<C;col++)
		if(search_grid(grid,row,col,word))
		cout<<"Pattern found at: " <<row<<", "<<col<<endl;
		 }	
		 
		  
		 int main()
		 {
		 		  
		  string word;
		 char grid[R][C] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		                    "QWERTYUIOPASDFGHJKLZXCVBNM",
							"MNBVCXZLKJHGFDSAPOIIUYTREW",
							"AQWEDAHDJOAFLHELLODAEEERRA",
							"GOOFNMAMDKEJEADJHJJDEADLOI",
							"ABCDEFGHIKLMNOPQRSTUVWXYSZ",
							"ITRYJIOPRANHURFDMQRYUICZAA",
							"NWQUIOPDFRQWERRTYUKILLERFS"
							};
							
							
							
		  cout<<"\t\t\t******SEARCHING THE GRID******\n\n\n\n";
		  /*cout<<"Here is the grid\n\n";
		  cout<<"\t\t\t\t";
		  cout<<grid[R][C];
		  cout<<"\n\n\n\n";*/          // I am working on this block of code, will commit again soon!!
		  cout<<"What world do you want to search?: ";
		  cin>>word;
		  

		  
		  
	
		pattern_search(grid, word);
		cout<<endl<<endl;
			
		
	return 0;
}
