#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int aux) {
    if (n == 0)
        return; 

    hanoi(n - 1, from, aux, to); // передвигаем все ингр кроме большого чтобы сначала убрать маленькие ингредиенты с исходной салфетки и освободить большой 

    cout << "Ingredient " << n
         << " move from " << from
         << " to " << to << '\n';

    hanoi(n - 1, aux, to, from);  //после перемещения большого ингредиента перекладываем оставшиеся маленькие ингредиенты со вспомогательной салфетки на целевую
}

int main() {
    int n;
    cin >> n;

    hanoi(n, 1, 3, 2);

    return 0;
}