numbers = input()

sum = 0
for el in numbers.split(' '):
    try:
        sum += int(el)
    except:
        continue


print("Suma este {}".format(sum))
