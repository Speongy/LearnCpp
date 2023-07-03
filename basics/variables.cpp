#include <iostream>
using namespace std;

int Multiply(int a, int b){
    return a * b;
}

void MultiplyandLog(int a, int b){
    int result = Multiply(a, b);
    if (result > 2147483647){
        printf("Overflow error.");
        exit (1);
    }
    cout << result << endl;
}

int main() {
    while (true){
        cout << "Two numbers pls: " << endl;
        int a, b;
        cin >> a >> b;

        MultiplyandLog(a,b);
    }
}
