#include <iostream>
using namespace std;

void InputArray(int *array, int size) {
    if (*array == NULL || size == 0) {
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d人目を入力してください。　", i + 1);
        cin >> array[i];
    }
}

double AveArray(int *array,int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int main()
{
    int* array;
    int size;
    printf("何名入力しますか？\n>");
    cin >> size;

    array = new int[size];

    InputArray(&array[0], size);

    cout << "平均は" << AveArray(&array[0], size) << "点です。" << endl;


    if (array != NULL) {
        delete[] array;

        array = NULL;
    }
}