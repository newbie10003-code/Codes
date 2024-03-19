dic = {}
# def solve(a, b, c, d):
#     if a > c or b > d:
#         return False
#     if a == c and b == d:
#         return True
    
#     if (a, b) in dic:
#         return dic[(a, b)]

#     dic[(a, b)] = solve(a+b, b, c, d) or solve(a, b+a, c, d)
#     return dic[(a, b)]

def solve(a, b, c, d):
    if a > c or b > d:
        return False
    if a == c and b == d:
        return True
    while a <= c and b <= d:
        

a, b, c, d = int(input()), int(input()), int(input()), int(input())
print(solve(a, b, c, d))