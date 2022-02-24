data={
    "S":[
        {"A":1},
        {"B":2},
        {"C":5},
    ],
    "A":[
        {"D":4},
        {"F":9},
    ],
    "B":[
        {"D":11},
        {"E":5},
        {"F":16},
    ],
    "C":[
        {"F":2},
    ],
    "D":[
        {"T":18},

    ],
    "E":[
        {"T":13},
    ],
    "F":[
        {"T":2},
    ],
    "T":[],
}
# print(data)
id=0
ans=[]

def log(*arguments):
    for l in arguments:
        print(str(l), end=" : ")
 
# def getPaths(start,end):
#     for k,v in data.items():

        

def d(start,end,output,val=0):
    if(not data[start]):
        return log(output,"End At",start,end)
    global id
    global ans
    for i in data[start]:
        #log(i)
        if(i.get(end)):
            output+=" ("+list(i.keys())[0]+")"+str(i.get(end))
            ans.append(val+int(i.get(end)))
            log("\n",output,"ID=",id,"|Total",val+int(i.get(end)),"\n")
            id+=1
            return i.get(end)
        else:
            output+=" ("+list(i.keys())[0]+")"+str(i.get(list(i.keys())[0]))
            d(list(i.keys())[0],end,output,val+int(i.get(list(i.keys())[0])))
        



if __name__ =="__main__":
    # start=input("Enter starting point :").upper()
    # end=input("Enter ending point :").upper()
    start="S"
    end="T"
    output="Itiration : "
    d(start,end,output)
    
    ans_index = ans.index(min(ans))
    print("Best Path ID : "+ str(ans_index))
 
