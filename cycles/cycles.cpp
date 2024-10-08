// cycles.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "ru");
    int couter = 0, vvod;
    char symb, symb2;
    cout << "выберите какой будет линия горизонтальная(|) или вертикальная(-): ";
    cin >> symb;
    cout << "введите количество символов: ";
    cin >> vvod;
    switch(symb){
    case'-':
        cout << "введите символ: ";
        cin >> symb2;
        while(couter < vvod){
        couter++;
        cout << symb2<<endl; 
    }
    case'|':
        cout << "введите символ: ";
        cin >> symb2;
        while (couter < vvod) {
            couter++;
            cout << symb2 << endl;
        }
    }


   /* int diapos, couter=0, resultat=0;
    cout << "введите диапозон: ";
    cin >> diapos;
    while (couter < diapos) {
        couter++;
        if (couter % 2 == 0) {
            resultat += couter;
        }
    }
    cout << resultat;*/
    //3
   /*int diapos, couter = 0, result = 1;
   cout << "введите число факториала: ";
   cin >> diapos;
   
   if (diapos == 0){
           cout << "фкториал 0 = 1";
   }
   else{
       while (couter < diapos) {
           couter++;
           result *= couter;
       }
   }
   cout << "факториал числа " << diapos << " равен: "<< result;*/
   
   //4

 /*  int p, count = 0, l;
   cout << "введите ширину подушки: ";
   cin >> p;
   cout << "введите длину ткани: ";
   cin >> l;
   if (l<p) {
       cout << "нельзя сшить ни 1 подушки";
   }
   else {
       while (p <= l) {
           l -= p;
           count++;
       }
   }
   cout << "швея может сшить  " << count << " подушек ";*/
   
   //5

   /*int n, count = 0, l;
   cout << "введитевведите сколько ресурсов на складе: ";
   cin >> n;
   cout << "введите сколько забирает грузовик: ";
   cin >> l;
   while (n <= l) {
           l -= n;
           count++;
       }

   cout << "грузовиков за грузом приехало: " << count;*/

   //6

 /*  int a = 5,res=0,count = 0;
   while (count < a) {
       count++;
       res += count;
   }
   cout << res;*/

   //7

  /* int a = 5, count=0;
   char b = '*';
   while (a < 5) {
       cout << "*\n";
   }*/

   //8

  /*int num1, num2, sum = 0, count = 0;

  cout << "Введите первое число: ";
  cin >> num1;
  cout << "Введите второе число: ";
  cin >> num2;
  if (num1 > num2) {
    swap(num1, num2); 
  }
  int i = num1;
  while (i <= num2) {
    sum += i;
    count++;
    i++;
  }
  cout << "Сумма чисел в диапазоне: " << sum << endl;
  cout << "Среднее арифметическое: " << (double)sum / count << endl;*/

    //9

    /*int a, count = 0;
    cout << "введите диапозон: ";
    cin >> a;
    while (count < a) {
        count++;
        cout << "*";
    }*/

    //10

    /*int a, count = 0;
    char c;
    cout << "ведите диапозон: ";
    cin >> a;
    cout << "введите символ: ";
    cin >> c;
    while (count < a) {
        count++;
        cout << c;
    }*/


   return 0;

}

