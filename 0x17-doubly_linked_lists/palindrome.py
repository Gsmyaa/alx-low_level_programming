#!/usr/bin/python3
num1 = []
num2 = []
larg_num = 0

"""
this generates list of 3-digit numbers
and saves in num1
"""
for i in range(1, 10):
    for j in range(0, 10):
        for k in range(0, 10):
            num1.append(int(str(i) + str(j) + str(k)))
"""
generates list of 3-digit numbers
and save in num2
"""
for i in range(1, 10):
    for j in range(0, 10):
        for k in range(0, 10):
            num2.append(int(str(i) + str(j) + str(k)))
"""
checks if product of num1 and num2 is palindrome
"""
for i in num1:
    for j in num2:
        pro = str(i * j)
        if pro == pro[::-1]:
            # print(i, j, pro)
            if int(pro) >= larg_num:
                larg_num = int(pro)
print(larg_num)
