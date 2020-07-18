import sys
def findMin(a, n):

	su = 0
	su = sum(a)
	dp = [[0 for i in range(su + 1)]
			for j in range(n + 1)]
	for i in range(n + 1):
		dp[i][0] = True
	for j in range(1, su + 1):
		dp[0][j] = False
	for i in range(1, n + 1):
		for j in range(1, su + 1):
			dp[i][j] = dp[i - 1][j]
			if a[i - 1] <= j:
				dp[i][j] |= dp[i - 1][j - a[i - 1]]
	diff = sys.maxsize
	for j in range(su // 2, -1, -1):
		if dp[n][j] == True:
			diff = su - (2 * j)
			ans1 = (j)+diff
			break

	return ans1
a=list(map(int,input().split()))
n = len(a)
print(findMin(a, n),end="")
