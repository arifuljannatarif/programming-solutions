n=int(input());odn=True;odp=True;
for i in range(n):
    x=int(input())
    if x%2==0:
        print(f'{int(x/2)}') 
    else:
        if x<0:
            print(f'{int((x/2)-1)}') if odn else print(f'{int((x/2))}');odn=not odn;
        else:
            print(f'{int((x/2)+1)}')if odp else  print(f'{int((x/2))}');odp=not odp;n=int(input());odn=True;odp=True;
for i in range(0,n):
    x=int(input())
    if x%2==0:
        print(f'{int(x/2)}') 
    else:
        if x<0:
            if odn: print(f'{int((x/2)-1)}')
            else: print(f'{int((x/2))}')
            odn= not odn;
        else:
            if odp: print(f'{int((x/2)+1)}')
            else: print(f'{int((x/2))}')
            odp= not odp;