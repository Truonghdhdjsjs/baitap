function namnhuan(n)
{
    if(n%400==0 || ( n%4==0 && n%100!=0))
        {
            return true;
        }
    return false;
}
console.log(namnhuan(2024))