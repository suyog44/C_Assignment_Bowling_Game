# Bowling Game 

### Game Rules
- A bowling game consists of 10 frames.  
- Each frame, the player has two tries to knock down 10 pins with a bowling ball.  
- The score for the frame is the total of knocked-down pins, plus bonuses for strikes and spares.  
- A **spare** is when a player knocks down all 10 pins in two tries.  
  - The bonus for this frame is the number of pins knocked down by the next roll.  
- A **strike** is when the player knocks down all 10 pins on his first try.  
  - The bonus for this frame is the number of pins knocked down by the next two rolls.  
- In the **10th frame**, a player is allowed to throw an extra ball if he/she scores a Spare or a Strike.  
  - No more than three throws are allowed for the 10th frame.  
  - No bonus scores are granted for Strikes and Spares in the 10th frame.  
  - If a player hits a Strike/Spare, 10 pins will be available again for the next throw within the 10th frame.  

### Example  

```
Frames:   | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 10  |
Scores:   | 5  | 4  | 9  | 1  | 10 | 6  | 3  | 10 | 10 | 2  | 8  | 6  |
Total:    | 5  | 14 | 29 | 60 | 61 | 77 | 97 | 117 | 133 |
```

#### Frame Calculations:
- **2nd Frame:**  
  - Frame score = 9 (4+5)  
  - Total score = 14 (9 + score of Frame 1)  

- **3rd Frame:**  
  - Frame score = 10 (Spare)  
  - Total score = 29 (10 + Frame 2 total + bonus for next roll)  

- **5th Frame:**  
  - Frame score = 10 (Strike)  
  - Total score = 60 (10 + 2 next rolls + Frame 4 total)

## Online GDB Link: [onlinegdb.com/jivb1kctB](https://onlinegdb.com/jivb1kctB)
## Test Results: [Code And Test Result](https://github.com/suyog44/C_Assignment_Bowling_Game/blob/main/Bowling_Code.md)
