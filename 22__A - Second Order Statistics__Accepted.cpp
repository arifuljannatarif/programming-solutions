n=input()
arr=[int(i) for i in input().split()]
st=list(set(arr))
st.sort()
if len(st)<2:
    print('NO')
else:
    print(st[1])