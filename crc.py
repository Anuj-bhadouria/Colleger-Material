def xor(check,poly):
    res=""
    for i in range(1,len(poly)):
        if check[i] == poly[i]:
            res +='0'
        else:
            res+='1'
    return res

def crc(data,poly):
    n=len(poly)
    p_data =data +'0'*(n-1)
    check=list(p_data)
    for i in range(len(p_data)):
       
       
        if check[i] =='1':
            check=xor(check,poly)[1:]
        else:
            check=xor(check,'0'*n)[1:]
    return check

def reciver(r_data,poly):
    crc_check=crc(r_data,poly)
    print("Crc value after checking-",crc_check)
    if 1 in crc_check:
        print("No error detected")
    else:
        print("Error detected")


data=input("Enter data-")
poly=input("Enter polynomial-")
crc1=crc(data,poly)
final_data= data + crc1
print("Sender side ......")
print("CRC values -",crc1)
print("final data to be sent-",final_data)

reciver(final_data,poly)

