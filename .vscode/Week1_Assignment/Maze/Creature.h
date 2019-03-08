#ifndef CREATURE_H
#define CREATURE_H

class Maze; // forward declaration of Maze

class Creature
{

  private:
    const char creatureChar = 'o'; // representation of the creature;
    static Maze *mazePtr;          // all creatures point to the same maze;
    // creature coordinates
    int crRow;
    int crCol;

  public:
    /**Default Constructor */
    Creature();
    /** MOVEMENT METHODS */
    /** Marks a space as visited */
    void markAsVisited();
    /** Mark as path */
    void markAsPath();
    /** Move West*/
    void moveWest();
    /** Move East*/
    void moveEast();
    /** Move North */
    void moveNorth();
    /** Move South */
    void moveSouth();
    /** sets the mazePtr for all creatures **/
    static void setMaze(Maze *mPtr);
    /** Accessor for crRow */
    int getCrRow() const;
    /** Accessor for crCol */
    int getCrCol() const;
    /** returns pointer to the maze */
    static const Maze *getMazePtr();
};
#endif