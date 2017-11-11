import time
def main():
    length=0
    max=0
    for i in range(2,1000000):
        if count_steps(i) > length:
            length=count_steps(i)
            max=i
    print length,max        

def count_steps(testn):
    steps=0
    while testn  > 1:
        if testn & 1:
            testn=testn*3+1
        else:
            testn=testn/2
        steps+=1   
    return steps+1

if __name__=="__main__":
    # uncomment lines to see time consumed by os 
    #t0 = time.time()
    main()
    #t1 = time.time()
    #print t1-t0

