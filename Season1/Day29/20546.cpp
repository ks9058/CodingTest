#include <bits/stdc++.h>
using namespace std;
int seed;
int stock_price;
int check_up;
int check_down;
int last;

class asset {
public:
    int money;
    int stock;
    int total;
};

int main() {
    asset jun;
    asset min;

    cin >> seed;
    jun.money = seed;
    min.money = seed;

    for (int i = 0; i < 14; i++) {
        cin >> stock_price;
        if (i == 0) last = stock_price;

        if (stock_price > last) {
            check_up++;
            check_down = 0;
        } else if (stock_price < last) {
            check_down++;
            check_up = 0;
        } else {
            check_up = 0;
            check_down = 0;
        }

        // BNP 방식 (준현)
        if (jun.money >= stock_price) {
            int buy = jun.money / stock_price;
            jun.stock += buy;  // 기존 주식 유지
            jun.money -= buy * stock_price;
        }

        // TIMING 방식 (성민)
        if (check_up >= 3 ) {
            min.money += stock_price * min.stock;  // 기존 돈 유지
            min.stock = 0;
        } else if (check_down >= 3 ) {
            int buy = min.money / stock_price;
            min.stock += buy;  // 기존 주식 유지
            min.money -= buy * stock_price;
        }

        last = stock_price;
    }

    jun.total = jun.money + (jun.stock * stock_price);
    min.total = min.money + (min.stock * stock_price);

    if (jun.total > min.total) cout << "BNP";
    else if (jun.total < min.total) cout << "TIMING";
    else cout << "SAMESAME";

    return 0;
}
