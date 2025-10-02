# Увод в курса по УП
- Как създаваме ние софтуер?
- Езици за програмиране
- Защо C++?

# Увод в C++
## Изход на конзолата
*Синтаксис*: </br> ```cout << <обект>;```

Нека напишем първата си програма.
```c++
#include <iostream>

using namespace std;

int main()
{
   cout << "Hello world!" << endl;
}
```
## Променливи
Декларация на променлива: </br> ```<тип> <име> = <стойност>;``` </br>

### Примитивни типове данни
<table>
  <tr>
    <th>Име на типа</th>
    <th>Допустими стойности</th>
  </tr>
  <tr><td>char</td><td>$[-2^{7};\:2^{7}-1\:]$</td></tr>
  <tr><td>short</td><td>$[-2^{15};\:2^{15}-1\:]$</td></tr>
  <tr><td>int</td><td>$[-2^{31};\:2^{31}-1\:]$</td></tr>
  <tr><td>long long</td><td>$[-2^{63};\:2^{63}-1\:]$</td></tr>
  <tr><td>bool</td><td>$\{\:0;\:1\:\}$</td></tr>
  <tr><td>unsigned char</td><td>$[\: 0;\:2^{8}-1\:]$</td></tr>
  <tr><td>unsigned short</td><td>$[\: 0;\:2^{16}-1\:]$</td></tr>
  <tr><td>unsigned int</td><td>$[\: 0;\:2^{32}-1\:]$</td></tr>
  <tr><td>unsigned long long</td><td>$[\: 0;\:2^{64}-1\:]$</td></tr>
</table>

### Вход от конзолата
*Синтаксис*: </br> ```cin >> <променлива>;```

```c++
#include <iostream>

using namespace std;

int main()
{
   int grade;
   cin >> grade;
   cout << "Your grade is: " << grade;
}
```

## Преобразуване между типовете
Има два варианта за преобразуване между типовете:
- със загуба на информация
```c++
int a = 16;
bool b = a; // true
```
```c++
double a = 6.0221;
int b = a; // 6
```
- без загуба на информация
```c++
bool b = true;
int a = b; // 1
```
```c++
int b = 6;
double a = b; // 6.0
```
## Оператори
### Видове оператори
<table>
  <tr>
    <td><strong>Аритметични</strong></td>
    <td>+, -, *, /, %, ++, --</td>
  </tr>
  <tr>
    <td><strong>Оператори за сравнение</strong></td>
    <td><, <=, >, >=, ==, !=</td>
  </tr>
  <tr>
    <td><strong>Логически</strong></td>
    <td>&&, ||, !</td>
  </tr>
  <tr>
    <td><strong>Оператори за присвояване</strong></td>
    <td>=, +=, -=, *=, /=, %=</td>
  </tr>
</table>
