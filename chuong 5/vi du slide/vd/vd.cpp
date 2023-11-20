//vi du 1
int val = 5;
while (val >= 0)
{
	cout << val << " ";
	val = val - 1;
}
// vi du 2
x = 5;
while (x > 0)	//infinite loop because
	cout << x;	//x is always > 0
int numEntries = 1;
while (numeEntries <= 3)
	cout << "Still working ...";
	numEntries++;	//not in the loop body

while (numEntries = 3)	// alway true
{
	cout << "Still working ...";
	numEntries++;
}
// vi du 3
cout << "Enter a number (1_100) and"
	 << " I will get it. ";
cin >> number;
while (number < 1 || number >100)
{
	cout << "Number must be between 1 and 100."
		<< "Re-enter your number.";
	cin >> number;
}
//code to use the valid nuber goes here.
// vi du 4
int x = 1, y = 1;

x = ++y;			// y is incremented to 2
					//Then 2 is assigned to x
cout << x
	<< "  " << y;	// Displays 2  2
x = --y;			// y is decremented to 1
					// Then 1 is assigned to x
cout << x
<< "  " << y;		// Displays 1 1 
// vi du 5
int x = 1, y = 1;

x = y++;			// y++ returns a 1
					// The 1 is assigned to x
					// and y is incremented to 2
cout << x
<< "  " << y;		// Displays 1  2
x = y--;			// y-- returns a 2
					// The 2 is assigned to x
					// and y is decremented to 1
cout << x
	<< "  " << y;	// Displays 2 1
// vi du 6
int num, limit;
cout << "Table of squares\n";
cout << "How high to go? ";
cin >> limit;
cout << "\n\nnumber square\n";
num = 1;
while (num <= limit)
{
	cout << setw(5) << num << setw(6)
		<< num * num << endl;
	num++;
}
// vi du 7
do {
	// code to display menu
	// and perform actions
	cout << "Another choice? (Y/N) ";
} while (choice == 'Y' || choice == 'y');
// vi du 8
int sum = 0, num;
for (num = 1; num <= 10; num++)
	sum += num;
cout << "Sum of numbers 1 – 10 is "
	<< sum << endl;
// vi du 9
int total = 0;
cout << "Enter points earned "
<< "(or -1 to quit): ";
cin >> points;
while (points != -1) // -1 is the sentinel
{
	total += points;
	cout << "Enter points earned: ";
	cin >> points;
}
// vi du 10
for (row = 1; row <= 3; row++)
{
	for (col = 1; col <= 3; col++)
	{
		cout << row * col << endl;
	}
}
// vi du 11
while (inFile >> score)
	sum += score;


