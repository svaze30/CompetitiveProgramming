tem = []
for j in range(10001):
    tem.append(-1)
matrix=[]
def makematrix(n):
    global matrix
    matrix*=0
    for _ in range(n+2):
        matrix.append(tem)
    return matrix

def solve(arr,target,n):
    global matrix
    if target==0:
        return True
    if n==1:
        return target==arr[0]

    if matrix[n][target]>=0:
        return matrix[n][target]==1

    ignore=solve(arr[1:],target,n-1)

    take= False
    if target>=arr[0]:
        take=solve(arr[1:],target-arr[0],n-1)
    ret= ignore or take
    if ret:
        matrix[n][target]=1
    else:
        matrix[n][target]=0
    return ret

def main():
    t=int(input())
    while t :
        n,m=map(int,input().split())
        arr=[]
        sm=0
        for _ in range(n):
            temp=list(map(int,input().split()))
            arr.append(abs(temp[1]-temp[0]))
            sm+=min(temp[0], temp[1])
        target= m - sm
        makematrix(n)
        if solve(arr,target,n):
            print("YES")
        else:
            print("NO")
        t-=1

if __name__ == '__main__':
    main()