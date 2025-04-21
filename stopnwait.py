import time
import random

def sender(data):
    for char in data:
        print("Sending the ",char)
        ack=reciver(char)
        
        if ack:
            print("Acknowlegment Recived")
        else:
            print("Timeout")
    
def reciver(char):
    time.sleep(2)
    if random.random()<0.5:
        print("Reciver got ",char)
        return True
    else:
        # print("Timout for",char)
        return False
data=input("Enter data-")
sender(data)