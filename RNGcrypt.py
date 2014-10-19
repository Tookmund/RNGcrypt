#!/usr/bin/python
import string
import random
import sys

def randomdata(size):
	randstr = ''
	for x in range(size):
	randstr += hex(random.randrange(2147483647))
	return randstr
	
def encrypt():
	return randomdata(1024)

# adjust comments if using python 3
def p(strng):
	print strng
	#print(string)

if __name__ == "__main__":
	random.seed()
	inp = raw_input("Raw Text or File (t/f):")
	if (inp == "t"): 
		p(encrypt(raw_input("Enter Raw Text: ")))
	elif (inp == "f"):
		try:
			sys.stdout = open(raw_input("Enter File Name: ")+".rngc","r+")
		except:
			p("File failed to open")
		else:
			p(encrypt())
