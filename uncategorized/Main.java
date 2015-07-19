
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author bala
 */
 class Main
{
    public static void main(String args[])
    {
        int t = 0, i, flag, max = 0, flag2 = 0;
        int[] dates = new int[30];
        String message = null;
        ArrayList<String> numbers = new ArrayList<String>();
        for(i= 0; i < 30; i++)
        {
            dates[i] = 0;
        }
        BufferedReader scanner = new BufferedReader(new InputStreamReader(System.in));
        try {
            t = Integer.parseInt(scanner.readLine());
        } catch (IOException ex) {

        }
        Pattern p = Pattern.compile("\\d+");
        Matcher m;
        while(t-- > 0)
        {
            try {
                message = scanner.readLine();
            } catch (IOException ex) {
                
            }
            m = p.matcher(message);
            flag = 1;
            while(m.find())
            {
                numbers.add(m.group());
            }
            if(message.startsWith("G:"))
            {
                flag = 2;
            }
            for(String num : numbers)
            {
                dates[(Integer.parseInt(num))-1] += flag;
            }
            numbers.clear();
        }
        Arrays.sort(dates);
        if(dates[18] > dates[19])
        {
        	max = dates[18];
        }
        else
        {
        	max = dates[19];	
        }
        if(dates[18] == dates[19])
        {
        	flag2==1;
        }
        else
        {
        for(i = 0; i < 30; i++)
        {
        	if(i != 18 && i != 19)
        	{
        		if(dates[i] >= max)
        		{
        			flag2 = 1;
        			break;
        		}
        	}
        }
        }
        if(flag2 == 1)
        {
            System.out.print("No Date");
        }
        else
        {
            System.out.println("Date");
        }
     
    }
}
