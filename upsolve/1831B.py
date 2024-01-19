t = int(input())

for _ in range(t):
  n = int(input())

  a = list(map(int, input().strip().split()))[:n]
  b = list(map(int, input().strip().split()))[:n]

  seta = set(a)
  setb = set(b)

