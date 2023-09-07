#Timmys houses
print("Input number of large Houses for timmy:")
lhouse=int(input())
print("\nInput number of small houses for timmy:")
shouse=int(input())

#Timmys candy from the houses
bars = lhouse*3 + shouse*2

#how 
print("\nTimmy has", bars, 'bars')

print("\nInput number of large houses for Johnny")
klhouse=int(input())
print("\nInput number of small houses for Johnnny")
kshouse=int(input())

kbars = klhouse*3 + kshouse*2 - 2

print("\nJohnny two has", kbars, "bars")

if bars > kbars:
  print("\nTimmy has more candy bars than Johnny.")
elif bars==kbars:
  print("\nThey both have the ")
else:
  print("\nJohnny has more candy bars thsn Timmy.")
