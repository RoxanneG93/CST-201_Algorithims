const searchArray = (n, arr) => {
    for (i = 0; i < arr.length; i++) {
        if (arr[i] === n) {
            console.log(n + " exists at " + arr.indexOf(arr[i]));
            console.log(i);
            return i;

        }
    }
    return -1;
}

arrTest = ["cat", "dog", "rabbit"];
searchArray("rabbit", arrTest);



