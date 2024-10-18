// import java.util.Arrays;
import java.util.*;

class Solution {
    public int findContentChildren(int[] g, int[] s) {
       
        Arrays.sort(g);
        Arrays.sort(s);

        int ans=0,i,j=0;

        for(i=0;i<g.length;i++)
        {
            for( ;j<s.length;j++)
            {
                if(s[j]>=g[i])
                {
                    ans++;
                    j++;
                    break;
                }
            }
        }

        return ans;

       
    }
}