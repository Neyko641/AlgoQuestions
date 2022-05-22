def solve(s):
    size = len(s) - 1
    for i in range(0, int(size / 2) , 1):
        current_char = s[i]
        last_char =  s[size - i]
        if current_char != last_char:
            return False
    return True

print(solve("racecar"))
