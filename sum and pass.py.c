#!/usr/bin/python3

import time
 
t = time.localtime(time.time())
localtime = time.asctime(t)
str = "Current Time:" + time.asctime(t)
 
print(str);
n1 = int(input ('enter num 1:'))
n2 = int(input ('enter num 2:'))
n3 = int(input ('enter num 3:'))
sum =n1+n2+n3
print(sum)
if (sum>105):
 print("your passed the exam")
else:
 print("your failed the exam")