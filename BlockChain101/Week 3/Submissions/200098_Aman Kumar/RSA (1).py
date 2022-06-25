#RSA Program 1
n = int(input())
d = int(input())
p = 1
q = 1
e = 1
for x in range(2,n):
    if n%x ==0:
        p = x
        break

q = (int)(n/p)

phi = (p-1)*(q-1)

for x in range (1,phi):
    if (x*d)%phi==1 and phi%x!=0:
        e = x
        break


msg = int(input())

enc = (msg**e)%n

print(enc)

