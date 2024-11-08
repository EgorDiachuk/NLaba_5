#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main() {
    // Встановлюємо кодування UTF-8 для виведення
    SetConsoleCP(65001); // Установка кодування для вводу
    SetConsoleOutputCP(65001); // Установка кодування для виводу
    setlocale(LC_ALL, ""); // Встановлення локалі для правильного відображення символів

    int n; // Розмір масиву
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    // Динамічне виділення пам'яті для масиву
    int* arr = new int[n];

    // Заповнення масиву користувачем
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ініціалізація мінімального і максимального значень першим елементом масиву
    int minElement = arr[0];
    int maxElement = arr[0];

    // Пошук мінімального та максимального елементів
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    // Обчислення різниці між максимальним і мінімальним елементами
    int difference = maxElement - minElement;

    // Виведення результату
    cout << "Різниця між максимальним і мінімальним елементами: " << difference << endl;

    // Звільнення пам'яті
    delete[] arr;

    return 0;
}
