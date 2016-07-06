//This program currently returns the IP address as an integer which can't be parsed. 
//Would be commiting soon with this program returning IP as string.
#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

void IPaddressgenerator(char IPclass)
{
	int octet1;
	srand(time(NULL));   //srand sets the seed of rand
    if(IPclass=='A'|| IPclass=='a')
    octet1 = 0 + (rand() % ( 127 - 0 + 1 ) );
   
   else if(IPclass=='B' || IPclass=='b' )
   octet1 = 128 + (rand() % ( 191 - 128 + 1 ) );
   
   else if(IPclass=='C' || IPclass=='c')
   octet1 = 192 + (rand() % ( 192 - 223 + 1 ));
   
   else if(IPclass=='D' || IPclass=='d')
   octet1 = 224 + (rand() % ( 224 - 239 + 1 ));
   
   else if(IPclass=='E' || IPclass=='e')
   octet1 = 240 + (rand() % ( 240 - 255 + 1 ));
   
   else
   {
   
   cout<<"\n\nPlease enter a valid class!!";
   exit(1);
}
   
    int octet2 = 0 + ( rand() % ( 255 - 0 + 1 ) );
	int octet3 = 0 + ( rand() % ( 255 - 0 + 1 ) );
	int octet4 = 0 + ( rand() % ( 255 - 0 + 1 ) );
	
	 cout<<"\n\nHere is your IP address: ";
	cout<<octet1<<"."<<octet2<<"."<<octet3<<"."<<octet4;
	
	
}

int main()
{
	char IPclass;
	
	cout<<"\t\t\t\t\t*****IP ADDRESS GENERATOR*****";
	cout<<"\n\n What do you want to be the class of IP address?(A/B/C/D/E): ";
	cin>>IPclass;
	
	
    IPaddressgenerator(IPclass);
}
