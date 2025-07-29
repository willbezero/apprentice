inp = input()
arr = inp.split()
h = int(arr[0])
w = int(arr[1])

b = w*100*100 // (h*h)

print(b)

if b >= 25:
    print("Obesity") 