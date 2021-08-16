#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

void loadingbar()
{
	system("color 2f");
	system("color 0e");
	char a = 177, b = 219;
	cout << "\n \n \n \t \t \t \t Loading...";
	cout << "\n \n";
	cout << "\t \t \t \t \t ";
	for (int i = 0; i <= 25; i++);
	cout << a;
	Sleep(150);
	cout << "\r";
	cout << "\t \t \t \t \t";
	for (int i = 0; i <= 25; i++)
	{
		cout << b;
		Sleep(200);
	}
	Sleep(500);
}

void resizeFont(int x)
{
CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = x;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
string intro()
{
	system("cls");
	resizeFont(24);
	string name;
	cout << "Enter character's name : ";
	cin >> name;
	loadingbar();
	return name;
}

void printVegetaa()
{
	system("cls");
	resizeFont(4);
	ifstream file;
	file.open("E:/NghichC++/hnd.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(10);
	}
}
void printVegeta()
{
	system("cls");
	resizeFont(4);
	ifstream file;
	file.open("E:/NghichC++/vegeta.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(10);
	}
}

void printSongoku()
{
	system("cls");
	resizeFont(4);
	ifstream file;
	file.open("E:/NghichC++/Songoku.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(10);
	}
}


void printSongohan()
{
	system("cls");
	resizeFont(4);
	ifstream file;
	file.open("E:/NghichC++/Songohan.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(10);
	}
}

void printBeerus()
{
	system("cls");
	resizeFont(4);
	ifstream file;
	file.open("E:/NghichC++/Beerus.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(10);
	}
}

void goodbye()
{
	system("cls");
	resizeFont(4);
	ifstream file;
	file.open("E:/NghichC++/Goodbye.txt", ios_base::in);
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
		Sleep(10);
	}
}

int main()
{
	int rpt = 1;
	do 
	{
	string data = intro();
	if (data == "Vegeta")
		{
		printVegeta();
		cin >> rpt;
		}
	else if (data == "Songoku")
		{
		printSongoku();
		cin >> rpt;
		}
	else if (data == "Beerus")
		{
		printBeerus();
		cin >> rpt;
		}
	else if (data == "Songohan")
		{
		printSongohan();
		cin >> rpt;
		}
	else if (data == "hnd")
	{
		printVegetaa();
		cin >> rpt;
	}
	else 
	{	cout << "\n \n";
		cout << "\t \t \t \tWrong input!!! Try again....";
		Sleep(3000);
	}
} while (rpt == 1);
goodbye();
Sleep(1000);
exit;
}
