function tong(a,b,c)
{
    if(Number.isInteger(a)&&Number.isInteger(b)&&Number.isInteger(c))
        {
            return a+b+c;
        }
    else
        {
            console.log('tat ca phai la so nguyen');
        }
}
console.log(tong(5,4,9))