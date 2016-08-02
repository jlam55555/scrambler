public class Scrambler {
  public static void main(String[] args) {
    int numMoves = 25, types = 0;
    String[] moves = new String[25],
             turnTypes = { "U", "R", "L", "D", "B", "F" },
             revTypes = { " ", "2", "'" };
    String type = turnTypes[(int) Math.floor(Math.random()*6)],
           revs;
    while(types < numMoves) {
      if(
        types == 0 ||
        moves[types-1] != (type = turnTypes[(int) Math.floor(Math.random()*6)])
      ) {
        revs = revTypes[(int) Math.floor(Math.random()*3)];
        moves[types++] = type;
        System.out.print(type + revs + (types % 5 == 0 ? "\n" : "\t"));
      }
    }
  }
}
