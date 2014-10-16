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

# comment out if using python 3
def print (string):
  print string

if __name__ == "__main__":

  inp = input("Raw Text or File (t/f):")
  if (inp == "t"): 
    print(encrypt(input("Enter Raw Text: ")))
  elif (inp == "f"):
    try:
      fp = open(input("Enter File Name: "))
    except:
      print("File failed to open")
    else:
      print(encrypt(fp.read()))
