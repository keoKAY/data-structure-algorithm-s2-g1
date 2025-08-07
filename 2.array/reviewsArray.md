Data Structure + Algorithm 

Linear vs Non-Linear

## Array 
Data Structure 
- Linear Data Structure 

Notation 
Asymtotic Notation: 
- BigO -> Worst Case Scenario of algo
- Omega -> Best-Case.......
- Theta -> Average

x -> input size 
y -> time 
BigO 
    - Time Complexity : how fast or slow the algorithm , when input size increase 
    - Space Complexity : describe on memory consumption when input size increase
**Key Note for array are**: 
- Homogenuous :  Must be in the same data type:
- Contiguous Memory Location: elements store next to each other 
[0x1000,0x1004,0x1008]
- Index-Based Access: 0-based index (start from 0 )
- Random Access: O(1): Constant Time 


[90,20,30,40 , ...... , n]

*** 
[+] Different types of array : 
- Static Array
    - fixed size 
    - compile time 
    - stored value on stack
    - deallocate automatically
- Dynamic Array 
    - runtime  
    - stores values on heap
    - `new` keyword , `delete` keyword

- Using Array related library `std::array`


### Searching algorithms 
There are many different type of searching algorithms 
- Linear Search 
    - Time Complexity: O(n)
    - Space Complexity: O(1)
    
- Binary Search (Normal Algorithms ) with sorted array 
    - Time Complexity: O(log n )
    - Space Complexity: O(1)
> How to implements , how to write it 


# Binary Search with vector