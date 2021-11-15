print("*"*15 + ' The Money Changer ' + "*"*15 )
money = float(input("Money input :  "))
price_things = float(input("How much is it (goods) : "  ))
change = money - price_things
print('*'*49)
print("Change =  {} Bath".format(change))
print('*'*49)

N1000 = int(change/1000)
N500 = int((change%1000)/500)
N100 = int(((change%1000)%500)/100)
N50   = int((((change%1000)%500)%100)/50)
N20 = int(((((change%1000)%500)%100)%50)/20)
N10 = int((((((change%1000)%500)%100)%50)%20)/10)
N5 = int(((((((change%1000)%500)%100)%50)%20)%10)/5)
N1 = int((((((((change%1000)%500)%100)%50)%20)%10)%5)/1)
N0_5 = int(((((((((change%1000)%500)%100)%50)%20)%10)%5)%1)/0.5)
N0_25 = int((((((((((change%1000)%500)%100)%50)%20)%10)%5)%1)%0.5)/0.25)

if change == 0:
    print("No change!")
elif change < 0:
    print("Sorry! You don't have enough money to buy.")
elif change > 0:
    if change % 1000 == 0:
        print("N1000 = {}".format(N1000))
    elif change % 1000 != 0:
        print("""N1000 = {} \nN500  = {} \nN100 = {} 
N50 = {} \nN20 = {} \nN10 = {}
N5 = {} \nN1 = {} \nN0.5 = {} \nN0.25 = {} """.format(N1000,N500,N100,N50,N20,N10,N5,N1,N0_5,N0_25))

print('*'*18 + ' Thank you ! ' + '*'*18)