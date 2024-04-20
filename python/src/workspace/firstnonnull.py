def firstNonNull(p1, p2):
	if p1 is not None:
		return p1
	elif p2 is not None:
		return p2
	else:
		raise TypeError("Both values are None.")