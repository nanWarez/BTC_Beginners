//created by Cr4shOv3rrid3 under the 7331 General Public BTC Banking License 
// feel free to copy, hack, destroy or create new things with it
// P.S. if you don't like i created that for you. just replace first line with your own cool stylish hacker name ;)

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
cout << "Bitcoin Generator Test Programm: \n";

struct test {
	int quantity;
	float price;
	double extended;
};
struct test2 {
	int quantity2;
	float price2;
	double extended;
};
struct test3 {
	int quantity3;
	float price3;
	double extended;
};

test var1; 
test2 var2;
test3 var3;

var1.price = 5.5;
var2.price2 = 2.6;
var3.price3 = 1.9;  //10 BTC in sum and cost price of roundabout a local banking license: (100k$)

string unit = "BTC";

cout << var1.price << " "<< unit << "\n" << var2.price2 << " " << unit << "\n" << var3.price3 << " " << unit << "\n";

int count = 10;
char ch;
while(cin.get(ch) != ".")
count++;
cout << "Numbers of characters read: \n" << count;
cout << "Test print!!!";

        return 0;
} //Basic Beginners Bitcoin generator Test Programmm in 50 Lines of code
