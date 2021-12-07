int solve(int n) {
    if(n < 3) {
        return 1;
    }
    int prev = 1, current = 1, i = 2;
    while(i++ < n) {
        int previous = current;
        current = prev + current;
        prev = previous;
    }
    return current;  
}
