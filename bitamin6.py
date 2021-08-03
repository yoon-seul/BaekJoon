import pandas as pd
import numpy as np

#1
a=[0,2,4,6,8]
b=[1,3,5,7,9]
print(a,b)

#2
a=10 
b=(1.44,'bitamin')
c="비타민"
d=[1,2,3,4,5]
e={'특별시':'천안','충남':'서울','인천':'광역시'}

print('a는 int') #정수형 타입을 뜻한다
print('b는 tuple') #수정불가능한 집합을 만들때 쓴다
print('c는 string') #문자열을 뜻한다
print('d는 array') # 수정 가능한 집합인 배열이다
print('e는 dictionary') #키와 값으로 이루어진 집합이다.

#3
score = [90,25,67,45,80]
for i in range(0,5):
    if score[i] >= 80:
        print("우수")
    elif score[i] >= 60 & score[i] < 80:
        print("보통") 
    else:
        print("미흡")


