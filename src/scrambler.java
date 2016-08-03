import java.util.ArrayList;

public class scrambler {
  public static void main(String[] args) {
    int numMoves = 25;
    ArrayList<String> moves = new ArrayList<String>();
    String[] turnTypes = { "U", "R", "L", "D", "B", "F" },
             revTypes = { " ", "2", "'" };
    String type = turnTypes[(int) Math.floor(Math.random()*6)];
    System.out.println();
    while(moves.size() < numMoves)
      if(moves.size() == 0 || moves.get(moves.size()-1) != (type = turnTypes[(int) Math.floor(Math.random()*6)])) {
        moves.add(type);
        System.out.print(type + revTypes[(int) Math.floor(Math.random()*3)] + (moves.size() % 5 == 0 ? "\n" : "\t"));
      }
    System.out.println();
  }
}
