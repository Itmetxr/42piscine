inp = input("Enter : ")
op = []
dic = {'-':1, '+':1, '*':2, '/':2, '%':2}

for i in inp:
    if i.isalnum():
        print(i, end="")

    elif i == '(':
        op.append(i)

    elif i in dic:
        while op and op[-1] != '(' and dic[op[-1]] >= dic[i]:
            print(op.pop(), end="")
        op.append(i)

    elif i == ')':
        while op and op[-1] != '(':
            print(op.pop(), end="")
        if op:
            op.pop()
while op:
    print(op.pop(), end="")