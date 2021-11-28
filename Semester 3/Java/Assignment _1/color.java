public class color {
    public static void main(String[] args) {
        int red_color = 0xff0000;
        System.out.println("red color : (" + (red_color>>16) + ", " + ((red_color>>8) & 0xff) + ", " + (red_color & 0xff)+")");

        System.out.println("CONVERTING RED TO BLUE");
        int n =~ red_color;
        int blue_color = (n) & 0xff;
        System.out.println("blue color: (" + (blue_color>>16) + "," +((blue_color>>8) & 0xff)+","+(blue_color & 0xff) + ")");

        System.out.println("CONVERTING BLUE TO GREEN");
        int green_color = (blue_color<<8) & 0x00ff00;
        System.out.println("green color: ("+(green_color>>16)+","+((green_color>>8) & 0xff)+","+(green_color & 0xff)+")");
    }
}
