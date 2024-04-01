// Ryan Delos Reyes; R642R993
// DUE: 4/2/2024
// Programming Assignment 3: Memory Management and Address Translation

#include <iostream>
#include <iomanip>
#include <unordered_set>

// Define the size of a page/frame in bytes
const int PAGE_SIZE = 256;

// Define the page/frame table as an unordered set for fast lookup
std::unordered_set<unsigned int> page_frame_table;

// Create a function to translate logical address to physical address
void translateAddress(unsigned int logical_address) {
    unsigned int page_number = logical_address / PAGE_SIZE;
    unsigned int offset = logical_address % PAGE_SIZE;

    // Check if the page is in memory
    if (page_frame_table.find(page_number) == page_frame_table.end()) {
        // Page fault occured, load page into memory
        std::cout << "Page fault occured, loading page " << std::hex << page_number << " into memory." << std::endl;
        page_frame_table.insert(page_number);
    }

    // Display logical address, page number, and offset
    std::cout << "Logical Address: 0x" << std::hex << logical_address
        << " => Page Number: 0x" << std::hex << page_number
        << ", Offset: 0x" << std::hex << offset << std::endl;
}

int main() {
    // Sample input
    unsigned int logical_addresses[] = { 0x3A7F, 0xABCD, 0x5678 };

    // Translate logical address to physical address
    for (int i = 0; i < sizeof(logical_addresses) / sizeof(logical_addresses[0]); i++) {
        translateAddress(logical_addresses[i]);
    }

    return 0;
}


