function reesults(a)
{
    let count=0 
    while(a!=0)
        {
           a=Math.floor(a/10);
           count++
        }
    return count;
}
console.log(reesults(1234))