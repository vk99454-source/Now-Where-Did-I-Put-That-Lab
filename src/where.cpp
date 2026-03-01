#include <string>
using namespace std;

int where(string word, char character) {
    for (int i=0; i<word.length(); i++) {
        if (word[i] == character) {
            return i;
        }
    }
    return -1;
}
int where(string word, string pattern) {
    if (pattern.length() > word.length()) {
        return -1;
    }
    for (int i=0; i <= word.length() - pattern.length(); i++) {
        bool match = true;
        for (int j = 0; j < pattern.length(); j++) {
            if (word[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match == true) {
            return i;
        }
    }
    return -1;
}