num=input("지원번호를 입력하시오 : ")
listNum=list(num)




if (listNum[3]=="1" or listNum[3]=="3"):
    sex="남"
    if (listNum[3]=="1"):
        middle="x"
    else:
        middle="o"
else:
    sex="여"
    if (listNum[3]=="2"):
        middle="x"
    else:
        middle="o"
if (listNum[-1]=="s"):
    manager="o"
else:
    manager="x"

print("성별: "+sex)
print("편입: "+middle)
print("운영진: "+manager)