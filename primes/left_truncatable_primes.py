import math

def isPrime(num):
    sqrtval = math.floor(math.sqrt((num)))
    if num%2 == 0 :
        return False
    i = 3
    while( i <= sqrtval):
        if num%i == 0 :
            return False
        i = i+2
    return True



ltprimes = [2,3,5,7]+[None]*5000
pc = 4
pi = 1
npi = 4
power=10
while(pi < pc):
    for j in range(1, 10):
        for i in range(pi,pc):
            num = j*power+ltprimes[i]
            if isPrime(num):
                ltprimes[npi] = num
                npi = npi+1
    power = power * 10
    pi = pc
    pc = npi
for i in range(0, npi):
    print("%d) %d" % (i+1,ltprimes[i]))

