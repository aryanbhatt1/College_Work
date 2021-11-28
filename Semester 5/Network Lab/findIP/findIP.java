package findIP;
import java.net.*;
import java.io.*;

public class findIP
{
    public static void main(String[] args)
    {
        try
        {
            InetAddress ip_address=InetAddress.getLocalHost();
            System.out.println("The client system address is " + ip_address);
        }
        catch(IOException e)
        {
            System.out.println("The exception is: "+e);
        }
    }
}