t=int(input())
for q in range(t):
	n,m,k=[int(x) for x in input().split()]
	s=str(1/pow(n,m))
	num=s[s.find('.')+1:]
	l=len(num)
	if l>k:
		print(num[l-k:])
	else:
		for i in range(k-l):
			print('0',sep='',end='')
		print(num)	
	