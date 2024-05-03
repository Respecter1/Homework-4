/*
1.Напишіть один оператор if, який перевіряє дві цілі численні змінні і присвоює змінній з більшим значенням менше значення,
використовуючи лише один додатковий оператор else.
*/
 
int main()
{
	int number1{ 19 };
	int number2{ 20 };

	if (number1 > number2)
		number2 = number1;
	else
		number1 = number2;
	
	return 0;
}
