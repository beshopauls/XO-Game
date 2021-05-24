//This programe XO game ;
#include<iostream>
using namespace std;
char arr[3][3] = { '1','2','3','4','5','6','7','8','9' }, player = 'X';
int num_of_playing = 0;

void Draw();
void input();
void change_player();
char check_winer();
int main()
{
	while (true)
	{
		num_of_playing++;
		Draw();
		input();
		if (check_winer() == 'X')
		{
			cout << "\t Frist player (X) won \n";
			break;
		}
		else if (check_winer() == 'O')
		{
			cout << "\t Second player (O) won \n";
			break;
		}
		else if (check_winer() == '/' && num_of_playing == 9)
		{
			cout << "It is Draw \n";
			break;
		}
		change_player();
		system("cls");

	}
	system("pause");
	return 0;
}
void Draw()
{
	cout << "         Start Game XO \n";
	cout << "\t------------------------------------------------------------------------\n";
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			cout << "\t|        " << arr[i][j] << "\t       ";
			
		}
		cout << "|\n\t------------------------------------------------------------------------\n";
	}
}
void input()
{
	int a = 0;
	cout <<"Player ( "<<player <<" ) "<<"Enter a number of the field : "; cin >> a;
	switch (a)
	{
	case 1:
	{
		if (arr[0][0] == '1')
		{
			arr[0][0] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 2:
	{
		if (arr[0][1] == '2')
		{
			arr[0][1] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 3:
	{
		if (arr[0][2] == '3')
		{
			arr[0][2] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 4:
	{
		if (arr[1][0] == '4')
		{
			arr[1][0] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 5:
	{
		if (arr[1][1] == '5')
		{
			arr[1][1] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 6:
	{
		if (arr[1][2] == '6')
		{
			arr[1][2] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 7:
	{
		if (arr[2][0] == '7')
		{
			arr[2][0] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 8:
	{
		if (arr[2][1] == '8')
		{
			arr[2][1] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	case 9:
	{
		if (arr[2][2] == '9')
		{
			arr[2][2] = player;
			break;
		}
		else
		{
			cout << "This feild already has char please try again\n";
			input();
			break;
		}
	}
	default:
		cout << "Your choice not correct please try again \n";
		input();
		break;
	}

}
void change_player()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char check_winer()
{
	//Frist player winer (X);
	//00 01 02 ;
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
		return 'X';
	if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
		return 'X';
	if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
		return 'X';
	// 10 11 12 ;
	if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
		return 'X';
	if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
		return 'X';
	if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
		return 'X';
	 // Diagonal 00 11 22 ;
	if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
		return 'X';
	// Diagonal 02 11 20 ;
	if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
		return 'X';

	 //Second Player winer (O);
     //00 01 02 ;
	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
		return 'O';
	if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
		return 'O';
	if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
		return 'O';
	// 10 11 12 ;
	if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
		return 'O';
	if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
		return 'O';
	if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
		return 'O';
	// Diagonal 00 11 22 ;
	if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
		return 'O';
	// Diagonal 02 11 20 ;
	if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
		return 'O';
	
	return '/';
}