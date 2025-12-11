#include <iostream>
using namespace std;

int add(int a, int b = 1){

    return a + b;
}
int main(){

    int result = add(2);
    cout<<"Result: "<<result<<endl;
}