 char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size();
        int a=e+1;
        while(s<=e){
            int mid=s+(e-s)/2.;
            if(letters[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
            return letters[s%a];
        
        
    }
