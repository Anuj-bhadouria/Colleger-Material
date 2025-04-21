import random
import time

def reciver():
    time.sleep(random.uniform(0.5,3.0))
    res=random.choice(["ACK","NACK","Timout"])
    return res

def sender(packets):
    id=1
    for packet in packets:
        tries=0
        while tries<3:
            start=time.time()
            reply=reciver()
            taken=time.time() - start

            if reply=="ACK":
                print(f"ACK recived for packet{id}...")
            elif reply=="NACK":
                print(f"Ack delayed recived for packet{id} {round(taken,2)}...")
            else:
                print(f"Timeout! for packet{id}...") 
            tries+=1
            time.sleep(2)

        
        if tries == 3:
            print("Failed after 3 tries")
        id+=1
packets=["hello","hi","bye"]
sender(packets)
