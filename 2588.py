#BaekJoon 2588 by yoonseul at 210802

numA=int(input())
numB=int(input())
numC=numB
num=[0,0,0]

for i in range (0,3):
    num[i] = numC % 10
    numC -= (numC % 10)
    numC /= 10
    print(int(numA * num[i]))
    
print(numA*numB)