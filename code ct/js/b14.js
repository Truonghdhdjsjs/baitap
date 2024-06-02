function tinhToHop(n, k) {
    // Nếu k lớn hơn n hoặc nhỏ hơn 0, không thể tính tổ hợp
    if (k > n || k < 0) {
        return 0;
    }

    // Khởi tạo biến result làm bằng 1 để tính giá trị tổ hợp
    let result = 1;

    // Vòng lặp để tính giai thừa của n
    for (let i = 1; i <= k; i++) {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}

// Ví dụ tính tổ hợp 5 lấy 2
console.log(tinhToHop(5, 2)); // Kết quả là 10
