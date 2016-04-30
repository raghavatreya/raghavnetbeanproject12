import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class DateFormatExample 
{
    public static void main(String[] args) 
    {
        Thread th = new Thread(new Runnable()
        {
            public void run()
            {
                while(true)
                {
                    Date date = Calendar.getInstance().getTime();
                    DateFormat formatter = new SimpleDateFormat("EEEE, dd MMMM yyyy, hh:mm:ss.SSS a");
                    String today = formatter.format(date);      
                    System.out.print("Today : " + today+"\r");
                    try
                    {
                    	Thread.sleep(1000);
                    }
                    catch(Exception ex)
                    {
                    }
                }
            }
        });
        th.start();
    }
}