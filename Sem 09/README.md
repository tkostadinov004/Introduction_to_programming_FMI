# Динамични многомерни масиви
- динамично заделен масив от указатели, всеки от които сочи към първия елемент на даден масив

Пример за създаване на динамична NxM матрица:
```c++
unsigned n, m;
cin >> n >> m;

int** matrix = new int*[n];
for (unsigned i = 0; i < n; i++)
{
    matrix[i] = new int[m];
}
```
Ако искаме можем да имаме различен брой колони на всеки ред:
```c++
unsigned n;
cin >> n;

int** matrix = new int*[n];
for (unsigned i = 0; i < n; i++)
{
    matrix[i] = new int[i + 1];
}
```
Триене на динамични матрици:
```c++
void freeMemory(int** matrix, unsigned rows)
{
    for (unsigned i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

unsigned n, m;
cin >> n >> m;

int** matrix = new int*[n];
for (unsigned i = 0; i < n; i++)
{
    matrix[i] = new int[m];
}

freeMemory(matrix, rows);
```

## Задачи
### Примери от семинар
**1.** Имаме N отбора, всеки с произволен брой играчи (един отбор може да има трима играчи, друг петима и т.н.). Напишете функция, която добавя точки на играч на определен индекс в даден отбор. Също така,
напишете функция, която принтира следната информация за отборите - общи точки и точки за всеки играч в отбора. Отборите следва да се принтират сортирани в низходящ ред по общия брой точки.</br>

**2 (токенизация).** Напишете функция, която приема символен низ и връща масив от символни низове, който представлява отделните думи на низа.</br>
<table>
   <tr><th><strong>Вход</strong></th><th><strong>Изход</strong></th></tr>
   <tr><td>Hi! My name is&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;what?</td><i><td>["Hi", "My", "name", "is", "what"]</td></i></tr>
   <tr><td>1 2 3 </br> 4 5</td><i><td>1 2 3 4 5</td></i></tr>
</table>

### Още задачи
**1.** Напишете функция, която приема символен низ и връща лексикографски най-малката дума.
<table>
   <tr><th><strong>Вход</strong></th><th><strong>Изход</strong></th></tr>
   <tr><td>"Things&nbsp;&nbsp;do not change; we Change." - Henry David&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Thoreau</td><i><td>Change</td></i></tr>
</table>

**2.** Напишете функция, която приема символен низ и връща най-често срещаната дума в него.
<table>
   <tr><th><strong>Вход</strong></th><th><strong>Изход</strong></th></tr>
   <tr><td>"Things&nbsp;&nbsp;do not change; we Change." - Henry David&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Thoreau</td><i><td>change</td></i></tr>
</table>

**3.** Напишете функция, която приема стринг с произволна дължина и връща като резултат нов стринг, за който е заделено точно количество памет, представляващ конкатенацията на първата и последната дума от подадения, като двете думи да са разделени с интервал.
<table>
   <tr><th><strong>Вход</strong></th><th><strong>Изход</strong></th></tr>
   <tr><td>"Things&nbsp;&nbsp;do not change; we Change." - Henry David&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Thoreau</td><i><td>Things Thoreau</td></i></tr>
</table>
