#!/usr/bin/python3

lst = [34,56,2,34,45,100,456,6,4,56,1]
len = len(lst)
while (len):
	for i in range(0,len):
		if (i + 1) < len and lst[i] > lst[i + 1]:
			lst[i], lst[i+1] = lst[i+1], lst[i]
	len -=1

print(lst)
