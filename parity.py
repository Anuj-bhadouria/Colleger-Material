data=input("Enter Data-")
parity=input("Set parity to Odd or Even -")

def count(data):
    one_counter=0
    for i in data:
        if i == "1":
            one_counter += 1
    return one_counter

ones=count(data)
print("No of 1s are ",ones)

def parityCheck(data,ones,parity):
    if (ones %2==0 and parity =="odd") or (ones%2!=0 and parity=="even"):
        data=data+ "1"
        print("Modified data -",data)
    return data

sRes=parityCheck(data,ones,parity)

def ReceiverSide(data,parity):
    rOnes=count(data)
    print ("Data Recieved -",data)
    print("set parity -",parity)
    print("No of ones in parity bits -",rOnes)

    if (rOnes %2==0 and parity=="Even") or (rOnes %2!=0 and parity=="odd"):
        print("No error found")
    else:
        print("Error Found")

ReceiverSide(data,parity)


