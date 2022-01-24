#include <iostream>
#include <string>

int solve(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (ans & 1 << (s[i] - 'a'))
            return i;
        else
            ans |= 1 << (s[i] - 'a');
    }
    return -1;
}
