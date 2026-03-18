#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int maxLen = 0;
    int minLen = 1000000; // 충분히 큰 값

    cout << "문자열들을 입력하세요 (Ctrl+D로 종료):" << endl;

    while (cin >> word) {
        int len = word.length();

        if (len > maxLen) maxLen = len;
        if (len < minLen) minLen = len;
    }

    cout << "\n가장 긴 문자열 길이: " << maxLen << endl;
    cout << "가장 짧은 문자열 길이: " << minLen << endl;

    return 0;
}