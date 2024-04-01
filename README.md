# OS_Assignment3
Memory Management

**Functionality**
1. **Page Size:** The program has a fixed page/frame size of 256 bytes.
2. **Page Table:** The program implements a page/frame table as an unordered set which is used for fast lookup
3. **Address Translation:** The function _translateAddress_ function takes a logical address as input and computes the corresponding page number and its offset
4. **Page Fault Handling:** A simple if statement to check if the page is not in memory (not found in the table), a page fault occurs, and the page is loaded into memory

**Instruction for Execution**

As this is a C++ code, compile the program using a C++ compiler. Run the compiled executable and observe the logical address and the translated page numbers and offset.
