
def F(inputSet: set):
	if not all(isinstance(n, int) and n>=0 for n in inputSet):
		return -1

	tmpSet = set(inputSet)
	resultSet = set()
	for el in inputSet :
		for a in tmpSet:
			resultSet.add(el+a)
			resultSet.add(el*a)
		tmpSet.discard(el)
	
	return len(resultSet)