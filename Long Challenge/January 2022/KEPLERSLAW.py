for _ in range(int(input())):
    values = input().split(' ')
    values = list(map(int, values))
    v1 = values[0]**2/values[2]**3
    v2 = values[1]**2/values[3]**3
    if v1 == v2:
        print('Yes')
    else:
        print('No')
