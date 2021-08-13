#include <bits/stdc++.h>
using namespace std;
 
// Function to swap even
// and odd bits
unsigned int swapBits(unsigned int x)
{
    // Get all even bits of x
    unsigned int even_bits = x & 0xAAAAAAAA; //he number 0xAAAAAAAA is a 32 bit number with all even bits set as 1 and all odd bits as 0. 
 
    // Get all odd bits of x
    unsigned int odd_bits = x & 0x55555555; //The number 0x55555555 is a 32 bit number with all odd bits set as 1 and all even bits as 0. 
 
    even_bits >>= 1; // Right shift even bits
    odd_bits <<= 1; // Left shift odd bits
 
    return (even_bits | odd_bits); // Combine even and odd bits
}
 
// Driver code
int main()
{
    unsigned int x = 23; // 00010111
 
    // Output is 43 (00101011)
    cout<<swapBits(x);
 
    return 0;
}
 
