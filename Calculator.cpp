#include <iostream>
using namespace std;

int main()
{
  int n1, n2;
  char op;
  cout << "Calculator Is Open\n";
  cout << "Enter [000] To Exit\n";
  while (true)
  {
    cin >> n1;
    if (n1 == 000)
      break;
    cin >> op >> n2;
    if (op == 'x' || op == '*' || op == '+' || op == '-' || op == '/' || op == '%')
    {
      switch (op)
      {
      case 'x':
        cout << "= " << n1 * n2 << "\n";
        break;
      case '*':
        cout << "= " << n1 * n2 << "\n";
        break;
      case '+':
        cout << "= " << n1 + n2 << "\n";
        break;
      case '-':
        cout << "= " << n1 - n2 << "\n";
        break;
      case '/':
        cout << "= " << n1 / n2 << "\n";
        break;
      case '%':
        cout << "= " << n1 % n2 << "\n";
        break;
      }
    }
    else
      cout << "Error, Pleas Enter From This (x,*,+,-,/)\n";
  }
  return 0;
}