function result(a)
{
    let tong2=0
    if(a>=2)
        {
            for(let i=2;i<=a;i++)
                {
                    tong2+=i;
                }
            return tong2+(2*a)
        }
}
console.log(result(3))