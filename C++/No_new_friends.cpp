bool solve(int n, vector<vector<int>>& friends) {
    std::vector<int> people;
    for (auto i = 0; i < n; i++) {
        people.push_back(0);
    }
    people.resize(n);
    for (auto links : friends) {
        people[links[0]] = 1;
        people[links[1]] = 1;
    }
    for (auto person : people) {
        if (!person) {
            return false;
        }
    }
    return true;
}
