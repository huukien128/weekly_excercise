#include <iostream>
using namespace std;
int main() {
  int num1, num2;
  char operation;
  cin >> num1 >> operation >> num2;
  switch (operation) {
    case '+':
      cout << num1 + num2;
      break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
          cout << num1 * num2;
          break;
    case '/':
            if(num2 == 0)
              cout << "Division by zero";
            else
              cout << num1 / num2;
            break;
    case '%':
      if(num2 == 0)
        cout << "Division by zero";
      else
        cout << num1 % num2;
      break;
    default:
        cout << "Invalid operation";
        break;

  }
}
