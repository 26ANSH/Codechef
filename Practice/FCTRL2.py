def fact(num):
    if num in range(2):
        return 1
    return num * fact(num-1)

for i in range(int(input())):
    print(fact(int(input())))
