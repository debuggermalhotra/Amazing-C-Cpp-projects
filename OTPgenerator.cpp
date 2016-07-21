#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

string OTPgenerator(int len)
{
string str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";  //Possible characters

int n = str.length();

string OTP;

for(int i=1;i=len;i++)
{
OTP.push_back(str[rand() % n]);
}

return(OTP);
}

int main()
{
	
srand(time(NULL));

int len=6; //How many characters long the OTP will be.

cout<<"Your OTP is - "<< OTPgenerator(len).c_str();

return(0);
}
