#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int func1(int N) {
    // N 이하의 3의 배수의 개수
    int count_of_3 = N / 3;
    // N 이하의 5의 배수의 개수
    int count_of_5 = N / 5;
    // N 이하의 15의 배수의 개수
    int count_of_15 = N / 15;

    // 3의 배수의 합
    int sum_of_3 = 3 * count_of_3 * (count_of_3 + 1) / 2;
    // 5의 배수의 합
    int sum_of_5 = 5 * count_of_5 * (count_of_5 + 1) / 2;
    // 15의 배수의 합
    int sum_of_15 = 15 * count_of_15 * (count_of_15 + 1) / 2;

    // 총합 계산
    int total_sum = sum_of_3 + sum_of_5 - sum_of_15;

    return total_sum;
}

void test1() {
    cout << "****** func1-2 test ******\n";
    int n[3] = { 16, 34567, 27639 };
    int ans[3] = { 60, 278812814, 178254968 };
    for (int i = 0; i < 3; i++) {
        int result = func1(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

int main(void) {
    test1();
}