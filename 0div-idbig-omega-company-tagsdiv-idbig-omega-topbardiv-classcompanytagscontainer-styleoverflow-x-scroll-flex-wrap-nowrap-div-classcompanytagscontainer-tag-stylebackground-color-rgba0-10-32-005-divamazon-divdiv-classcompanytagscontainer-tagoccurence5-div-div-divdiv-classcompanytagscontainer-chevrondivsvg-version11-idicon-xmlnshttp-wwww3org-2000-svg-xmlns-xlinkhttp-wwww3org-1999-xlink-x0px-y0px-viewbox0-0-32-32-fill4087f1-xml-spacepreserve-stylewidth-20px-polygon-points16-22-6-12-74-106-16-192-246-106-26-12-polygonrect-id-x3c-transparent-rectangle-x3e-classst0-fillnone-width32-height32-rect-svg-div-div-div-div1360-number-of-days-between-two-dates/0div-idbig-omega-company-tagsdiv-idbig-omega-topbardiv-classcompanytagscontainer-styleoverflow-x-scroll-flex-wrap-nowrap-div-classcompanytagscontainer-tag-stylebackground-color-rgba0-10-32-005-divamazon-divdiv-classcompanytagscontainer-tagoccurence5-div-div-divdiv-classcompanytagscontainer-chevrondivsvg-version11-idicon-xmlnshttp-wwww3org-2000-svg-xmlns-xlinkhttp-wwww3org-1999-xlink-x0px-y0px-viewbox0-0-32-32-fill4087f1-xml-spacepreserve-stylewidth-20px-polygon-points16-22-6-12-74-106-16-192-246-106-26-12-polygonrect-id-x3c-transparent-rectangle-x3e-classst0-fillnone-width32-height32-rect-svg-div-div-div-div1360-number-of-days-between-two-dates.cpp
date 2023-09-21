class Solution {
public:
    bool isLeap(int year){
        return ((year%4==0 && year%100!=0) || (year%400==0));
    }
    int daysinMonth(int month,int year){
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            return 31;
        if(month==2)
            return isLeap(year) ? 29 : 28;
        return 30;
    }
    int stringtoInt(string s){
        int year=stoi(s.substr(0,4));
        int month=stoi(s.substr(5,2));
        int days=stoi(s.substr(8,2));
        int total_days=0;
        for(int i=1971;i<year;i++){
            total_days+=isLeap(i)?366:365;
        }
        for(int i=1;i<month;i++){
            total_days+=daysinMonth(i,year);
        }
        return total_days+days;
    }
    
    
    
    int daysBetweenDates(string date1, string date2) {
        return abs(stringtoInt(date2)-stringtoInt(date1));
    }
};