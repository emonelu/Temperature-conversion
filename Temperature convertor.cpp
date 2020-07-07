// Convert Celsius to farenheit and vice versa
#include <iostream>
using namespace std;
double fahrenheit = 0, celsius = 0;

int menu;

void celsius_to_farenheit()
{
	cout << "\nEnter the temperature in Celsius: ";
	cin >> celsius;
	if (celsius <= -273.15)
	{
		cout << "You cannot measure under -273.15 degrees Celsius" << endl;
		cout << "By international agreement, absolute zero is defined as precisely; 0 K on the Kelvin scale, which\n";
		cout << "is a thermodynamic(absolute) temperature scale;and –273.15 degrees Celsius on the Celsius\n";
	    cout << "scale." << endl;
		
	}
	else
	{
		fahrenheit = (1.8 * celsius) + 32.0; //temperature conversion formula
		cout << "Temperature in degree Fahrenheit: " << fahrenheit << " F" << endl;
		cout << "==================================================" << endl;
	}
	
}
void farenheit_to_celsius()
{
	cout << "\nEnter the temperature in Fahrenheit: ";
	cin >> fahrenheit;
	if (fahrenheit <= -459.67)
	{
		cout << "You cannot measure under -459.67 degrees Celsius" << endl;
		cout << "By international agreement, absolute zero is defined as precisely; 0 K on the Kelvin scale, which\n";
		cout << "is a thermodynamic(absolute) temperature scale and –-459.67 degrees Fahrenheit on the Fahrenheit\n";
		cout << "scale." << endl;
	}
	else
	{
		celsius = (fahrenheit - 32) / 1.8; //temperature conversion formula
		cout << "\nTemperature in degree Celsius: " << celsius << " C" << endl;
		cout << "==================================================" << endl;
	}
	
}

int  finish()
{
	cout << "\nHave a nice day." << endl;
	cout << "==================================================" << endl;
	return 0;
}
void options()
{
	cout << "What do you want to convert:" << endl;
	cout << "==================================================" << endl;
	cout << "1. Celsius to Fahrenheit." << endl;
	cout << "2. Fahrenheit to Celsius." << endl;
	cout << "3. Exit." << endl;
}
void by_default()
{
	cout << "\nError Wrong Input." << endl;
	cout << "==================================================" << endl;
}
void conversion(int menu)
{
	do
	{
		options();
		cin >> menu;
		switch (menu)
		{
		case 1:
			celsius_to_farenheit();
			break;
		case 2:
			farenheit_to_celsius();
			break;
		case 3:
			finish();
			break;
		default:
			by_default();
			break;
		}
	} while (menu != 3);
}
int  main()
{
	conversion(menu);
}

