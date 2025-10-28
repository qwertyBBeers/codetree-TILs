n = int(input())
nums = list(map(int, input().split()))

# Please write your code here.
nums.sort()
for i in nums:
    print(i, end = " ") # 이렇게 해야 한 칸씩 띄어져서 print됨

print() #다음 줄로 내리기
for i in nums[::-1]:
    print(i, end = " ") # 이렇게 해야 한 칸씩 띄어져서 print됨
