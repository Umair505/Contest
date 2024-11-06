#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int maxFreqElement;

    while (Q--) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            int X;
            cin >> X;
            freqMap[X]++;
            if (freqMap[X] > maxFreq) {
                maxFreq = freqMap[X];
                maxFreqElement = X;
            }
        } else {
            if (freqMap.empty()) {
                cout << "empty\n";
            } else {
                cout << maxFreqElement << "\n";
                freqMap.erase(maxFreqElement);
                maxFreq = 0;
                for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
                    if (it->second > maxFreq) {
                        maxFreq = it->second;
                        maxFreqElement = it->first;
                    }
                }
            }
        }
    }

    return 0;
}
