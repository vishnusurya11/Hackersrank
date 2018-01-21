n=int(input())

if (n%2) == 0 :
	if(n>=2) & (n<6):
		print('Not Weird')
	elif(n>=6) & (n<21):
		print('Weird')
	else:
		print('Not Weird')
else :
	print('Weird')
