/*
1.Íàïèø³òü îäèí îïåðàòîð if, ÿêèé ïåðåâ³ðÿº äâ³ ö³ë³ ÷èñëåíí³ çì³íí³ ³ ïðèñâîþº çì³íí³é ç á³ëüøèì çíà÷åííÿì ìåíøå çíà÷åííÿ,
âèêîðèñòîâóþ÷è ëèøå îäèí äîäàòêîâèé îïåðàòîð else.
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
