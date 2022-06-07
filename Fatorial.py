numero = input("Insira um número: ")
fatorial = 1
  
for i in range(1,int(numero)+1):
    fatorial = fatorial * i
      
print ("O fatorial de ", numero, " é : ",end="")
print (fatorial)