#!/usr/bin/python
import string
import random

def randomdata(size):
  randstr = ''
  for x in range(size):
    randstr.join(random.randrange(2147483647))
  return randstr
  
def encrypt(string):
  return randomdata(1024)

# ajust comments if using python 3
def p(string):
  print string
  #print(string)

if __name__ == "__main__":
  random.seed()
  inp = raw_input("Raw Text or File (t/f):")
  if (inp == "t"): 
    p(encrypt(raw_input("Enter Raw Text: ")))
  elif (inp == "f"):
    try:
      fp = open(raw_input("Enter File Name: "))
    except:
      p("File failed to open")
    else:
      p(hex(encrypt(fp.read())))
