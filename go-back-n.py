import random
import time

data=int(input("Enter the no of packets-"))
n=int(input("Enter window size-"))

base =1

while base<=data:
    window_end=min(base+ n - 1,data)
    print(f"Sending packets :{list(range(base,window_end+1))}")

    success=True

    for i in range(base,window_end+1):
        print(f"Sending packet{i}...")
        event=random.choice(["OK","NO"])

        if event=="NO":
            print(f"packet{i} timedout")
            success=False
            break
        else:
            print(f"packet{i} Success") 
    if success:
        base=window_end+1
    else:
        time.sleep(2)