#include<iostream>

using namespace std;

int main (){

    int val1 , val2;
    cout << "二つの数字和と差を求めます"<< endl << "一つ目の数字を入力:";
    cin >> val1;
    cout << "二つ目の数字を入力:";
    cin >> val2;
    cout << val1 << " + " << val2  << " = "<< val1 + val2 << endl;
    cout << val1 << " - " << val2 << " = "<< val1 - val2 << endl;
}