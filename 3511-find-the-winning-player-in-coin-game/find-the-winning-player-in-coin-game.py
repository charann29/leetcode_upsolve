class Solution:
    def winningPlayer(self, x: int, y: int) -> str:
        # Helper function to determine the winner
        def play(x, y, turn):
            if x < 1 or y < 4:  # If a player cannot make a move
                return "Bob" if turn % 2 == 0 else "Alice"

            # Alternate turns
            if turn % 2 == 0:  # Alice's turn
                return play(x - 1, y - 4, turn + 1)
            else:  # Bob's turn
                return play(x - 1, y - 4, turn + 1)

        # Start the game with Alice's turn (turn = 0)
        return play(x, y, 0)
