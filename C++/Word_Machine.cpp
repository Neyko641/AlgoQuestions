int solve(vector<string>& ops) {
    std::stack<int> stack;
    int first;
    int second;
    for (auto i = 0; i < ops.size(); ++i) {
        if (ops[i] == "POP") {
            if (!stack.empty()) {
                stack.pop();
            } else {
                return -1;
            }
        } else if (ops[i] == "DUP") {
            if (!stack.empty()) {
                stack.push(stack.top());
            } else {
                return -1;
            }
        } else if (ops[i] == "+") {
            if (stack.size() >= 2) {
                first = stack.top();
                stack.pop();
                second = stack.top();
                stack.pop();
                stack.push(first + second);
            } else {
                return -1;
            }

        } else if (ops[i] == "-") {
            if (stack.size() >= 2) {
                first = stack.top();
                stack.pop();
                second = stack.top();
                stack.pop();
                stack.push(first - second);
            } else {
                return -1;
            }
        } else if (std::all_of(ops[i].begin(), ops[i].end(), ::isdigit)) {
            stack.push(std::stoi(ops[i]));
        }
    }
    return stack.top();
}
