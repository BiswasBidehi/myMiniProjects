month = ['January', 'February', 'March', 'April', 'May', 'June',
         'July', 'August', 'September', 'October', 'November', 'December']

# print(month[0])
# print(month[-1])
# print(month[len(month)-1])
# print(month[3:7])
# print(month[:3])
# print(month[0:])
# print(month[0::2])

# month[0] = 'Sunday'
# print(month[:])

month.sort()
print(month)

print('\n'.join(month))
print("-".join(month))
print()

month.append("Hello")
print(month)

print(max(month))
print(min(month))
