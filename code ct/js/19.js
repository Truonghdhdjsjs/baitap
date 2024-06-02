function reesults(a) {
    for(let i=1;i<=a;i++)
        {
            if(a%i==0)
                {
                    return true;
                }
        }
        return false;
}
console.log(reesults(6))