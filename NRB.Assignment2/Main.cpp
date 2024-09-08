//Neebin Buswa
//Assignment 2

#include <iostream>
#include <conio.h>

using namespace std;

//Function Prototypes
int GetLengthFromUser();
int GetWidthFromUser();
double CalculateArea(int length, int width);
void DisplayArea(double area);

int main()
{
	int userLength = GetLengthFromUser();
	int userWidth = GetWidthFromUser();
	double userArea = CalculateArea(userLength, userWidth);
	DisplayArea(userArea);

	(void)_getch();
	return 0;
}

//Functions
// 
//Get the length from the user
int GetLengthFromUser()
{
	int length;
	while (true)
	{
		cout << "Enter the length of rectangle: \n";
		cin >> length;
		if (length <= 0) cout << "Length must be greater than 0. Please try again.\n";
		cout << "\n";
		return length;
	}
}

//Get the width from the user
int GetWidthFromUser()
{
	int width;
	while (true)
	{
		cout << "Enter the width of rectangle: \n";
		cin >> width;
		if (width <= 0) cout << "Width must be greater than 0. Please try again.\n";
		cout << "\n";
		return width;
	}
}

//Calculate the area of the rectangle
double CalculateArea(int length, int width)
{
	double area = (length * width);
	//double area = .5 * (length * width); // if this is for a triangle. this how I would code it.
	return area;
}

//Display the area of the rectangle
void DisplayArea(double area)
{
	cout << "The area of the rectangle is: \n" << area << "\n";
}
