#include <stdio.h>
struct customer
{
    int customer_id[10];
    char customer_name[255];
    int customer_age [10];
    char customer_cause_of_death[255];
    char customer_resting_place[255];
    int customer_died_year[10];
    struct room add;
};

struct room{
    int room_type_id[10];
    int room_name[10];
    int room_type_number[10];
};

void import_data_from_file(){
    File *filexyz = fopen ("./Bootcamp/hotel-del-luna/code/customer_data.txt");
    struct customer xyz;

    fscanf(filexyz, "%d,%s,%d,%[^\n],%[^\n],%d",&customer_id,customer_name,&customer_age,customer_cause_of_death,customer_resting_place,&customer_died_year);
}