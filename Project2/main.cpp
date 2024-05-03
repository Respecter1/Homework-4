//2. Проаналізуйте наступну програму.Уявіть, що ви ввели три значення.Який результат ви очікуєте отримати ?
//Відповідь: 
//          - була помилка на лінії 27, якщоб я її не виправив то я присвоював значенню 'c' значення 'а-в'. 
#include <iostream>

using namespace std;

int main()

{

    int a, b, c;

    cout << "Please enter three numbers) \n";

    cout << "a: ";

    cin >> a;

    cout << "\nb: ";

    cin >> b;

    cout << "\nc: ";

    cin >> c;

    if (c == (a - b)) //тут була поиилка замість = повинно стояти ==            

    {

        cout << "\na: ";

        cout << a;

        cout << " minus b: ";

        cout << b;

        cout << " equals c: ";

        cout << c << endl;

    }

    else

        cout << "a - b does not equal c: " << endl;

    return 0;

}


//(нижще модернізована мною версія цієї программи, він більш читабельний по моїй точці зору)
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a, b, c;
//
//    cout << "Please enter three numbers) \n";
//    cout << "a: ";
//    cin >> a;
//    cout << "\nb: ";
//    cin >> b;
//    cout << "\nc: ";
//    cin >> c;
//
//    if (c == (a - b))
//    {
//        cout << "\na: "<< a;
//        cout << " - b: "<< b;
//        cout << " = c: "<< c << endl;
//    }
//    else
//        cout << "a - b ≠ c: " << endl;
//    
//    return 0;
//}
