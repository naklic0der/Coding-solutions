for x in range(int(input())):
	n = int(input())
	ans = 0
	times = int(n/2)
	
	ans = 8*(int(((times)*(times+1)*(2*times+1))/6))
	
	print(ans)
