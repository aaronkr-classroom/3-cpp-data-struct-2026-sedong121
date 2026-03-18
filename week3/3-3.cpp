#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> wordCount;
    string word;

    cout << "단어들을 입력하세요 (end로 종료):" << endl;

    while (cin >> word && word != "end") {
        wordCount[word]++;
    }

    cout << "\n단어 등장 횟수:\n";
    for (auto& pair : wordCount) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}