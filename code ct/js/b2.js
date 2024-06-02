// tong 2 so nguyeen 

function tong(a, b) {
    if (Number.isInteger(a) && Number.isInteger(b)) {
        return a + b;
    } else {
        return "Cả hai tham số phải là số nguyên.";
    }
}

const result = tong(4, 5);
console.log(result); // In ra 9

const result2 = tong(4.5, 5);
console.log(result2); // In ra "Cả hai tham số phải là số nguyên."
