from operator import *

data=str(input("Enter data(32 bit) ="))
bitsize=int(input("Enter the segement size="))

def genchecksum(data,bitsize):
    s1=data[0:bitsize]
    s2=data[bitsize :bitsize*2]
    s3=data[bitsize*2:bitsize*3]
    s4=data[bitsize*3:bitsize*4]

    return[s1,s2,s3,s4]

checksum=genchecksum(data,bitsize)

def addbit(bits):
    s1=bits[0]
    s2=bits[1]
    s3=bits[2]
    s4=bits[3]

    a1=bin(add(int(s1,2),int(s2,2)))
    a2=bin(add(int(s3,2),int(s4,2)))

    addition=bin(add(int(a1,2),int(a2,2)))
    addition=addition[2:]
    return addition

addition=addbit(checksum)

def comp(num):
    res=""
    for i in num:
        if i =="1":
            res=res+"0"
        else:
            res=res+"1"
    return res

addition=comp(addition)
print("Sender data -",addition)

def Reciver(data,bitsize,tst):
    check=genchecksum(data,bitsize)
    result=addbit(check)

    print("Recived data =",result)

    main=bin(add(int(result,2),int(result,2)))
    main=main[2:]
    
    maintst=comp(main)
    print("Checked values -",maintst)

    if maintst =="00000000":
        print("No error")
    else:
        print("Error deteceted")
Reciver=Reciver(data,bitsize,addition)