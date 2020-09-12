t = int(input())

for i in range(0,t):
    n = int(input())
    answer = 0
    pos = (n-1)//2
    answer = (pos * (pos+1)*(2*pos+1))//6
    answer*=8
    print(answer)