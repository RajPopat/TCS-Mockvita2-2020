from math import gcd,factorial
def ncr(n,r):
    return factorial(n)/(factorial(n-r)*(factorial(r)))
for i in range(int(input())):
    a,h,l1,l2,m,c = [int(i) for i in input().split()]
    num = 0
    den = pow(l2,m)
    if m*(a+c) < h:
        print("RIP")
    else:
        k,z = 0,m*a
        while z < h:
            z += c
            k += 1
        for i in range(k,m+1):
            if i == 0:
                num += pow(l2 - l1,m)
            elif i == m:
                num += pow(l1,i)
            else:
                num += (pow(l1,i)*pow(l2-l1,m-i)*ncr(m,i))
        x = gcd(int(num),den)

        print(str(int(num/x))+"/"+str(int(den/x)))
