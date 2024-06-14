#include <stdio.h>
#include <windows.h>

void getDate() {
    SYSTEMTIME st;
    GetSystemTime(&st);
    printf("Current date: %02d/%02d/%d\n", st.wDay, st.wMonth, st.wYear);
}

void setDate(int day, int month, int year) {
    SYSTEMTIME st;
    GetSystemTime(&st);
    st.wDay = day;
    st.wMonth = month;
    st.wYear = year;
    SetSystemTime(&st);
}

int main() {
    printf("Getting current date:\n");
    getDate();

    int day, month, year;
    printf("Enter new date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    
    printf("Setting new date:\n");
    setDate(day, month, year);
    getDate();

    return 0;
}
