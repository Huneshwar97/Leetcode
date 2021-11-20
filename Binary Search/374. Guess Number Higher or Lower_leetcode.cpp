int guessNumber(int n) {
        int s=1;
        int e=n;
        while(s<=e){
            int m=s+(e-s)/2;
            int a=guess(m);
            if(a==0){
                return m;
            }
            else if(a==1){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return -1;
    }
