#include <iostream>
#include <string>

using namespace std;

string names;
int balance;
int pin;
string history[100];
int countHistory = 0;
int countUsers = 0;

void registerUsers()
{
    cout << "Введите ваше имя";
    cin >> names;
    cout << "Введите пинкод";
    cin >> pin;
    cout << "Введите ваш баланс";
    cin >> balance;
    /*Доделать пользователей чтобы они сохранялись*/
    countUsers++;
    cout << "Аккаунт был успешно создан";
}
void login()
{
    string name;
    int pincode;
    int invalidtimes = 0;

    cout << "введите ваше имя";
    cin >> name;
    cout << "введите пинкод";
    cin >> pincode;
    /*нужно доделать блокировку аккаунта*/
    while (true) {
        if (name != names or pincode != pin)
        {
            cout << "Неверное имя или пинкод";
            cout << "Неудалось войти в аккаунт";
            invalidtimes++;
        }
    }
     if (invalidtimes == 3)
    {
        
    }
    else
    {
        cout << "Вы успешно вошли в свой аккаунт";
    }
}
     void ShowHistory()
     {

     }
        
    void menu(int choice)
   {

        while (true)
        {
        cout << "Выберите следующие действие";
        cout << "1. Баланс\n";
        cout << "2. Снять\n";
        cout << "3. Пополнить\n";
        cout << "4. Перевод\n"; /*Доделать переводы людям*/
        cout << "5. история\n";
        cout << "0. Выход\n";
        cout << "Выбор: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << balance << "баланс";
        }
        else if (choice == 2)
        {
            cout << "сумма снятия";
            int summa;
            cin >> summa;

            if (summa <= balance)
            {
                balance -= summa;
                cout << "У вас осталось" << balance;
            }
            else
            {
                cout << "Не хватает денег";
            }
            history[countHistory] = "снятие -" + to_string(summa);
            countHistory++;
        }
        else if (choice == 3)
        {
            int sum;
            cout << "сумма пополнения";
            cin >> sum;
            if (sum < 0)
            {
                cout << "неверная операция";
            }
            else 
            {
                balance += sum;
                cout << "теперь ваш баланс составляет: " << balance;
            }
            history[countHistory] = "Пополнение +" + to_string(sum);
            countHistory++;
        }
        else if (choice == 4)
        {
            /*Доделать переводы людям*/
            countHistory++;
        }
        else if (choice == 5)
        {

        }
   }
}

int main()
{
    setlocale(0, "rus");
   
}