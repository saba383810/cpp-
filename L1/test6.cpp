#include<iostream>
#include<string>

using namespace std;

int main (){

    string val1 ,val2;

    cout << "名前を表示します" << endl << "姓を入力してください:";
    cin >> val1;
    cout << "命を入力してください:";
    cin >> val2;
    cout << "名前は「" << val1+val2 << "」です。" << endl;
    return 0;
}
