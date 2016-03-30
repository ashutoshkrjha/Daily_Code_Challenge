def isprime(n):
	if(n==2):
		return 1;
	if(n==3):
		return 1;
	for i in range(2,n/2):
		if(n%i==0):
			return 0;
	return 1;


j=0;
i=2;
while(1):
	if(j==10002):
		break;
	if(isprime(i)==1):
		j=j+1;
	i=i+1;

i=i-1;
print("%d") % i;
