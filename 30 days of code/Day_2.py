mealCost=float(input())
tip=float(input())
tax=float(input())
t=((mealCost+((tip/100)*mealCost)+((tax/100)*mealCost)))
a= t-int(t)
if (a>=0.5) :
	total= str(int(t)+1)
else :
	total= str(int(t))
print('The total meal cost is '+ total+' dollars.')
