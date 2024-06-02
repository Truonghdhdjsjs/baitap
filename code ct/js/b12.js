function result(a) {
    let tong = 0;
   for(let i=1;i<=3*a+1;i++)
    {
        if(i%2==0)
            {
                tong-=i;
            }
        else
            {
                tong+=i;
            }
    }
    return tong;
}
console.log(result(2))