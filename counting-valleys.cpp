int countingValleys(int steps, string path) {
        
        int down=0;
        int up=0;
        for(int i=0; i<steps-1; i++){
            if(path[i]=='D' && up==0){
                down++;
            }
            if(path[i]=='U')up++;
            if(path[i]=='D')up--;
           
            printf("%d", down);
        }
        return down;
}