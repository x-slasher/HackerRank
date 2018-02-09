#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
    int val;
    double tip,tax,total_cost,res;
    tip= meal_cost * (tip_percent/100.0);
    tax=meal_cost*(tax_percent/100.0);
    total_cost=meal_cost+tip+tax;
    val=total_cost;
    res=total_cost-val;
    if(res>.49)
    {
        cout<<"The total meal cost is "<<ceil(total_cost)<<" dollars."<<endl;
    }
    else
    {
        cout<<"The total meal cost is "<<floor(total_cost)<<" dollars."<<endl;
    }


    return 0;
}
