let jobs= [
['a',100,3],
['c',60,1],
['b',80,2],
['d',10,4]
]

jobs.sort(sortFunction);

function sortFunction(a, b) {
      if (a[0] === b[0]) {
        return 0;
    }
    else {
        return (a[0] < b[0]) ? -1 : 1;
    }
}
console.log(jobs)

unit=1
let out=[]
for(let i=0;i<jobs.length;i++){
        //console.log(jobs[i])
        if(jobs[i][2] >= unit){
                out.push(jobs[i])
                unit++
        }
}


console.log(out)
sum=0
for(let i=0;i<out.length;i++){
        sum+=out[i][1]
}
console.log("profit : "+sum);