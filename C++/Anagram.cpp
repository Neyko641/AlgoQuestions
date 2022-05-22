bool solve(string s0, string s1) {
    if(s0.size() != s1.size()) {
        return false;
    }
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}
