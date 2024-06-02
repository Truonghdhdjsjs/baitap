function checknumber(a, b) {
    let result1 = [];
    let result2 = [];

    if (Number.isNaN(a) || Number.isNaN(b)) {
        console.log('INVALID');
        return;
    } else if (Number.isInteger(a) && Number.isInteger(b)) {
        for (let i = 1; i <= a; i++) {
            if (a % i == 0) {
                result1.push(i);
            }
        }
        for (let j = 1; j <= b; j++) {
            if (b % j == 0) {
                result2.push(j);
            }
        }
        let result = 1;
        for (let y = 0; y < result1.length; y++) {
            for (let z = 0; z < result2.length; z++) {
                if (result1[y] == result2[z]) {
                    result = result1[y];
                } else {
                    break;
                }
            }
        }
        if (result !== 1) {
            console.log(a / result);
        } else {
            console.log('INVALID');
        }
    }
}
console.log(checknumber(4,-8))