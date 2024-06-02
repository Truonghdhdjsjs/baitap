function result(a,b)
{
    let sum =0;
    for ( let i=a;i<=b;i++)
        {
            if(i%2==0)
                {
                    sum+=i;
                }
        }
    return sum;
}
console.log(result(2,4))