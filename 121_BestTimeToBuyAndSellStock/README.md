# Best Time To Buy And Sell Stock

## Problem Type

Dynamic programming

## Solution description

This is the same concept as #053 Maximum Subarray. The idea is to maintain a running calculation and then if you come across an element that would only make the judging metric better, then you switch to using this element.

In the maximum subarray case: we keep a running sum. If we find a number that is bigger than the sum ...

In the buy and selling stock case: we continuously keep track of the current profit. If our current profit is negative and we come across a number that is less than (read: more negative) than our profit, we stick with our current bought price. If the number is greater than our current profit, we should consider buying on this day instead. TODO: Finish this and type out the exhaustive cases or something, right now it doesn't make sense.