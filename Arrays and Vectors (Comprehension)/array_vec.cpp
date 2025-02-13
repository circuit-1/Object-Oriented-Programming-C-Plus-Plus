#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printMem(int * arr, int size) { // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

void printMem(string * arr, int size) { // void printMem(string arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%s at Memory Location: %p\n", arr[i].c_str(), arr + i);
    }
}

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    printMem(array, 5);
    array[4] = 500;
    cout << array[4] << endl;
    int* intptr1 = &array[0];
    int* intptr2 = &array[1];


    string arraystr[5] = {"Hello", "Hola", "Bonjour", "Hallo", "Ciao"};
    printMem(arraystr, 5);
    
    vector<double> vector = {1, 2, 3, 4, 5};
    vector.push_back(6);
    vector.push_back(7);
    
    cout << "Vector size after push_back: " << vector.size() << endl;
    vector.pop_back();
    cout << "Vector size after pop_back: " << vector.size() << endl;

    return 0;
}