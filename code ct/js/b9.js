function number(a,b)
{
   for(let i=a;i<=b;i++)
    {
        console.log(Number.isInteger(i).join(','))
    }
}
console.log(number(2,5))