import sys
input = sys.stdin.readline
def main():
    n = int(input())
    list = [0]
    for i in range (n):
        list.append(int(input()) + list[i])
    q = int(input())
    for i in range(q):
        s, e = map(int, input().split()) 
        s+=1
        e+=1
        print(list[e] - list[s-1])
main()