#!/usr/bin/python
import string
import random

# Based on id_generator from http://stackoverflow.com/questions/2257441/random-string-generation-with-upper-case-letters-and-digits-in-python
# def id_generator(size=6, chars=string.ascii_uppercase + string.digits):
#   return ''.join(random.choice(chars) for _ in range(size))
def randomdata(size):
  randstr = ''
  for x in range(size):
    randstr.join(random.choice('ABCDEF1234567890') for _ in range(10))
  
def encrypt(string):
  return randomdata(1024)

if __name__ == "__main__":
    try:
        print "Welcome to RNGcrypt!"
      except:
        print "Running under Python 2.x or earlier!"
        def print (string):
            print string
      else:
          print "Running under Python 3.x or later!"
          
    inp = input("Raw Text or File (t/f):")
    if (inp == "t"): 
      print(encrypt(input("Enter Raw Text: ")))
    else if (inp == "f"):
      try:
        fp = open(input("Enter File Name: "))
      except:
        print("File failed to open")
      else:
        print(encrypt(fp.read()))
