class Solution {
public:
    bool canChange(string start, string target) {
        int startL=0,startR=0;
        int targetL=0,targetR=0;

        int i=0,j=0;

        int scountL=0,scountR=0;
        int tcountL=0,tcountR=0;

        if(start==target)
        return true;

        while(i<start.size() || j<target.size())
        {
            while(i<start.size())
            {
                if(start[i]=='L'){
                    startL=i;
                    i++;
                    scountL++;
                    break;
                }

                if(start[i]=='R'){
                    startR=i;
                    i++;
                    scountR++;
                    break;
                }

                i++;
            }

            while(j<target.size())
            {
                if(target[j]=='L'){
                    targetL=j;
                    j++;
                    tcountL++;
                    break;
                }

                if(target[j]=='R'){
                    targetR=j;
                    j++;
                    tcountR++;
                    break;
                }

                j++;
            }

            if(startL < targetL)
            return false;

            if(startR > targetR)
            return false;
        }
        
        if(tcountL!=scountL || tcountR!=scountR || scountL+scountR==start.size())
        return false;

        return true;

    }
};
// startL=1;
// i=2
// targetL=0
// j=1;

// startR=4
// i=5
// targetR=7
// j=8

// i=8
// startR=7
// j=9
// targetR=8;



// start ka left target ke left se greater than equal pr hi hona chahiye 
// start ka rigit target ke right se less than equal prr hi hona chahiye
