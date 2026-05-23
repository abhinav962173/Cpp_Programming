#include<iostream>
using namespace std;

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;

    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "Max profit is = " << maxProfit << endl;
}

int main(){
    int prices[] = {3, 2, 7, 9, 8, 6, 25};
    int n = sizeof(prices)/sizeof(int);

    maxProfit(prices, n);
    return 0;
}

