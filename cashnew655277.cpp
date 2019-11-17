#include <iostream>
using namespace std;

int main() {
  int cash;
    int quotient;
    do {
    cout << "請輸入金錢：";
    cin >> cash;
} while (cash <= 1000);{
   quotient = cash / 1000;
        cout << quotient << "張1000元鈔票\n";
        cash = cash - quotient * 1000; }
   while (cash > 100){
   quotient = cash / 100;
        cout << quotient << "張100元鈔票\n";
        cash = cash - quotient * 100; }
    while (cash > 10){
   quotient = cash / 10;
        cout << quotient << "張10元硬幣\n";
        cash = cash - quotient * 10; } 
     while (cash > 1){
   quotient = cash / 1;
        cout << quotient << "張1元硬幣\n";
        cash = cash - quotient * 1; }   
        

}
