function reesults(a) {
    if(a<2)
        {
            return false;
        }
    for(let i=2;i*i<=a;i++)
        {
            if(a%i==0)
                {
                    return false;
                }
        }
        return true;
}
console.log(reesults(7))