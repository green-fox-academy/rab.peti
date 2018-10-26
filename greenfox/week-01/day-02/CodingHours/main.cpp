#include <iostream>

int main() {
    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int averageCodingHours = 6;
    int semesterLength = 17;
    int weeklyWorkdays = 5;
    float workingHoursWeekly = 52;

    std::cout << weeklyWorkdays*averageCodingHours*semesterLength << " hours are spent with coding in a semester by an attendee." << std::endl;
    std::cout << (weeklyWorkdays*averageCodingHours*semesterLength) / (workingHoursWeekly*semesterLength) *100 << "% of working hours were used for coding" << std::endl;

    return 0;
}