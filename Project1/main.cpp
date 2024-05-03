/*
1.Íàïèø³òü îäèí îïåğàòîğ if, ÿêèé ïåğåâ³ğÿº äâ³ ö³ë³ ÷èñëåíí³ çì³íí³ ³ ïğèñâîşº çì³íí³é ç á³ëüøèì çíà÷åííÿì ìåíøå çíà÷åííÿ,
âèêîğèñòîâóş÷è ëèøå îäèí äîäàòêîâèé îïåğàòîğ else.
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