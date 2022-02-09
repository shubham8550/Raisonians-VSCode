const fs=require('fs')
// fs.open("shubham.txt","w",(e,f)=>{
//     if (e) throw e
//     console.log(f)
//    // file.writeFileSync("hiiii")
// })



let data = "This is file by shubham.";

fs.writeFile("shubham.txt", data, (err) => {
if (err)
	console.log(err);
else {
	console.log("File written successfully\n");
	console.log("The written has the following contents:");
}
});
