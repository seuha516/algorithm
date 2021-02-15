arr=[1,1,2,4]
for i in range (4,70):
    arr.append(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4])

TC=int(input())
for i in range (TC):
    x=int(input())
    print(arr[x])