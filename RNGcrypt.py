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

# ajust comments if using python 3
def p(string):
  print string
  #print(string)

if __name__ == "__main__":

  inp = raw_input("Raw Text or File (t/f):")
  if (inp == "t"): 
    p(encrypt(raw_input("Enter Raw Text: ")))
  elif (inp == "f"):
    try:
      fp = open(raw_input("Enter File Name: "))
    except:
      p("File failed to open")
    else:
      p(encrypt(fp.read()))
