const fs = require("fs");

fs.open("sample.txt", "w", (err, file) => {
  if (err) throw err;
  console.log(file);
});

function add(a, b) {
  console.log(a + b);
  return a + b;
}
add(2, 4);

const ad = (a, b) => a + b;
console.log(ad(2, 3));
