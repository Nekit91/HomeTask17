#include <iostream>

double mean(double a, double b) {
    return (a + b) / 2;
}
double mean_arr(int arr[], int length) {
    double sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    return sum / length;
}
void powers(int N, int M) {
    for (int i = 0; i <= M; i++) {
        int power = 1;
        for (int j = 0; j < i; j++) {
            power *= N;
        }
        std::cout << N << "^" << i << " = " << power << std::endl;
    }
}
void positive_arr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    std::cout << "Задача 1\n";
    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    double result = mean(num1, num2);
    std::cout << "Среднее арифметическое: " << result << std::endl;

    std::cout << "Задача 2\n";
    int arr[] = { 57, 22, 34, 87, 79 };
    int length = sizeof(arr) / sizeof(arr[0]);
    double result1 = mean_arr(arr, length);
    std::cout << "Среднее арифметическое Массива: " << result1 << std::endl;

    std::cout << "Задача 3\n";
    int number1, number2;
    std::cout << "Введите первое число: ";
    std::cin >> number1;
    std::cout << "Введите второе число: ";
    std::cin >> number2;
    powers(number1, number2);
    
    std::cout << "Задача 4\n";
    int arr1[] = { -14, 27, -31, 49, -58 };
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    positive_arr(arr1, length1);
    std::cout << "Измененный Массив: ";
    for (int i = 0; i < length1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

























    return 0;
}