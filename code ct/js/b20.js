function ucln(a,b) {
   while(b!=0)
    {
        a=Math.abs(a);
        b=Math.abs(b);
        let temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
console.log(ucln(0,43))
