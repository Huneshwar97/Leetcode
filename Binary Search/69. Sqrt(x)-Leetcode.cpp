    int mySqrt(int x) {
        int s=1;
        int e=x;
        while(s<=e){
            long long m=s+(e-s)/2;
            long long l=m*m;
            if(l==x){
                return m;
            }
            else if(l>x){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return e;
        
    }
