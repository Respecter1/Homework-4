/*
1.�������� ���� �������� if, ���� �������� �� ��� ������� ���� � �������� ����� � ������ ��������� ����� ��������,
�������������� ���� ���� ���������� �������� else.
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