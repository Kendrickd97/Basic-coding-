//Kendrick Dubose 

#include <iostream>

using namespace std; 

int main(int argc, char **argv)
{
	int n; //The users input
	int i; //where it counts
	

	

	cout << " Input a number greater than or equal to 3." << endl;
	// Prompts the user to input a number
	cin >> n;
	//This will take in the int for N that you put in.
	
	if ( n >= 3) 
	{  //This will find the number of * to use, based off on how much the user inputs
		for(i= 0; i < n + 1; i++) //This will allow it to print N +1 number of lines so if it was 3 it would b 4.
		{
			for(int b = 0; b < i; b++) 
		    {
			   cout << " ";// for indentions on the left side
		    }
		    for(int c = 0; c < n; c++) //This is for the left asterics
		    {
				cout << '*';
			}
		    for(int d = 0; d < 2*n-2*i; d++) //this then goes for the spaces in the middle, the times i fixes an issue with it
		    {
				cout << " ";
			}
			for(int e = 0; e < n; e++) // This is for the asterics on the right, prints out the same amount as input
			
			{
				cout << '*';
			}
		}
		return 0;
	}
	else 
	{
		cout << "This is not what I asked for." << endl;
		return 0;
	}
	
	
	return 0;
}

