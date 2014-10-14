#!/usr/bin/python
import string
import random

# Based on id_generator from http://stackoverflow.com/questions/2257441/random-string-generation-with-upper-case-letters-and-digits-in-python
# def id_generator(size=6, chars=string.ascii_uppercase + string.digits):
#   return ''.join(random.choice(chars) for _ in range(size))
def randomdata(size):
  return ''.join(random.choice(string.ascii_lowercase + string.digits) for _ in range(size))
  
def encrypt(str):
  return randomdata(100)
