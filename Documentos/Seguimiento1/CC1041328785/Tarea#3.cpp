<<<<<<< HEAD
// DEVELOP TASk#3

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int cont;
	int fail=0;
	int score=0;
	int tries=0;
	
	
	
	cout << "WELL TO GUESS THE NUMBER" <<endl;
	cout << "Press 1 to start" <<endl;
	cin >> cont;
	
	
	while(cont == 1)
	{
		tries = tries+1;
		int R;
		int c = rand()%1001;
		cout <<"Guess the number between 1 and 1000"<<endl;
		cin >> R;
		
		if(R !=c)
		{
			cout << "FAIL" << endl;
			fail=fail+1;
			cout << "Press 1 to continue or other number to exit" << endl;
			cin >> cont;
		}
		
		else
		{
			score =score+1;
			cout << "YOU WIN THIS ROUND" <<endl;
			cout << "you want another?. press 1 to continue or other number to exit" <<endl;
			cin >> cont;
		}
		
	}
	
	cout << "tries= " << tries<<endl;
	cout << "fails= " << fail <<endl;
	cout << "win= "<< score<<endl;
	
	return 0;
}
=======
// DEVELOP TASk#3

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int cont;
	int fail=0;
	int score=0;
	int tries=0;
	
	
	
	cout << "WELL TO GUESS THE NUMBER" <<endl;
	cout << "Press 1 to start" <<endl;
	cin >> cont;
	
	
	while(cont == 1)
	{
		tries = tries+1;
		int R;
		int c = rand()%1001;
		cout <<"Guess the number between 1 and 1000"<<endl;
		cin >> R;
		
		if(R !=c)
		{
			cout << "FAIL" << endl;
			fail=fail+1;
			cout << "Press 1 to continue or other number to exit" << endl;
			cin >> cont;
		}
		
		else
		{
			score =score+1;
			cout << "YOU WIN THIS ROUND" <<endl;
			cout << "you want another?. press 1 to continue or other number to exit" <<endl;
			cin >> cont;
		}
		
	}
	
	cout << "tries= " << tries<<endl;
	cout << "fails= " << fail <<endl;
	cout << "win= "<< score<<endl;
	
	return 0;
}
>>>>>>> edd390f98ef86c6bc903e7d731e672d086512701
