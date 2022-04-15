i=0
s=0
toplam=0
kartno=[]
no=0
carpim=0
son=0
say=1
print("kart numarası giriniz: ")

for say in range(0,16):
	no=int(input(""))
	kartno.append(no)

for i in range(0,16,2):
	carpim = kartno[i]*2;
	if(carpim>9):
		kartno[i] = round(carpim %10 + carpim/10)
		
	else:
		kartno[i] = carpim
	print(kartno[i])

for i in range(16):
	toplam+=kartno[i]

if(toplam%10==0):
	print("kart numarasi gecerli!")
else:
	print("gecersiz!")

print(toplam)





