#!/usr/bin/python

def new_in_list(my_list, idx, element):
    if idx < 0 or idx > len(my_list) - 1:
        return (my_list)

    newlist = []
    for i in range(len(my_list)):
        if idx == i:
            newlist.append(element)
        else:
            newlist.append(my_list[i])
    return (newlist)
