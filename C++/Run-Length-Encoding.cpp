/*
Given a string s, consisting of digits and lowercase alphabet characters, that's a run-length encoded string, return its decoded version.

Note: The original string is guaranteed not to have numbers in it.

Constraints

0 ≤ n ≤ 100,000 where n is the length of s
*/

/*
Intuition : 
We'll assume that in the string might have numbers to express how many times a certain character appears.
If there isn't any repeatable character, it'll be a singular '1' before it.
So we iterate over the string and just convert a string number to integer and get the next character
in nested loop we'll just add it the necessary amount of times.
Complexity : n * m where n is the length of the string while m is the amount of times every character met is found.
*/
string solve(string s) {
    std::string times;
    std::string newStr;
    for (auto i = 0; i < s.size(); ++i) {
        if (!isalpha(s[i])) {
            times += s[i];
        } else {
            char current = s[i];
            int counter = std::stoi(times);
            times = "";
            while (counter > 0) {
                newStr += current;
                --counter;
            }
        }
    }

    return newStr;
}
