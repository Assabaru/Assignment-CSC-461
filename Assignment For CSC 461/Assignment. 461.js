
//Fixed Dynamic
function akashFixedDynamic() {
    let arr = new Array(3); // fixed size 3
    arr[0] = 11;
    arr[1] = 22;
    arr[2] = 33;
    console.log("Fixed Dynamic:", arr);
} akashFixedDynamic();





//Stack Dynamic
function akashStackDynamic() {
    let arr = [1, 2, 3];
    console.log("Stack Dynamic:", arr);
} akashStackDynamic();








//Fixed Heap Dynamic
function akashFixedHeapDynamic() {
    let arr = [5, 10, 15, 20];
    console.log("Fixed Heap Dynamic:", arr);
}
akashFixedHeapDynamic();









//Heap Dynamic
function akashHeapDynamic() {
    let arr = []; // empty array
    arr.push(100);
    arr.push(200);
    console.log("Heap Dynamic after push:", arr);

    arr.pop();
    console.log("Heap Dynamic after pop:", arr);
}
akashHeapDynamic();