#logic
num =[1,2,3,4]
target = 3

for i in range(0, len(num), 1):             #complexity going wrong
    for j in range(i + 1, len(num), 1):
        if num[i] + num[j] == target:
            print(f"{i} {j}")               #use return statement instead define a func
