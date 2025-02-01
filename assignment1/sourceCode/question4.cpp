
#include <cmath>
#include <iostream>
using namespace std;

template <typename T> T getQuotient(T, T);
template <typename T> T getRemainder(T, T);

template <typename T> struct twoNums {
  T num1;
  T num2;
};

int main() {

  string inputType;
  cout << "Enter type of numbers (int or double): ";
  cin >> inputType;

  if (inputType == "int") {

    twoNums<int> obj;

    cout << "Enter Dividend: " << endl;
    cin >> obj.num1;

    cout << "Enter Divisor: " << endl;
    cin >> obj.num2;

    cout << "The quotient of the division is: "
         << getQuotient(obj.num1, obj.num2) << endl;
    cout << "The remainder of the division is: "
         << getRemainder(obj.num1, obj.num2) << endl;

  } else if (inputType == "double") {
    twoNums<double> obj;

    cout << "Enter Dividend: " << endl;
    cin >> obj.num1;

    cout << "Enter Divisor: " << endl;
    cin >> obj.num2;

    cout << "The quotient of the division is: "
         << getQuotient(obj.num1, obj.num2) << endl;
    cout << "The remainder of the division is: "
         << getRemainder(obj.num1, obj.num2) << endl;
  } else {
    cout << "Invalid input. Enter an int or double.\n";
  }

  return 0;
}

template <typename T> T getQuotient(T num1, T num2) {
  if constexpr (is_integral<T>::value) {
    return num1 / num2;
  } else {
    return num1 / num2;
  }
}

template <typename T> T getRemainder(T num1, T num2) {
  if constexpr (is_integral<T>::value) {
    return num1 % num2;
  } else {
    return fmod(num1, num2);
  }
}
