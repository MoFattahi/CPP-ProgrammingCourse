#include <iostream>
using namespace std;

int orderedSpools()
{
    int ordered_spools;
    while(true)
    {
        cout << "Enter the number of spools ordered: ";
        cin >> ordered_spools;
        if (ordered_spools < 1)
        {
            cout << "The number of ordered spools must be greater than 1.\nTry agian." << endl;
            continue;
        }
        else
        break;
    }
    return ordered_spools;
}
//----------------------------------------------------------------
int inStockSpools()
{
    int inStock_spools;
    while (true)
    {
        cout << "Enter the number of spools in stock: ";
        cin >> inStock_spools;
        if (inStock_spools < 0)
        {
            cout << "The number of spools in stock must be greater than 0.\nTry agian."  << endl;
            continue;
        }
        else
        break;
    }
    return inStock_spools;
}
//----------------------------------------------------------------
int shippingCost(int ordered_spools)
{
    char ship_handle_status;
    int ship_handle_cost;
    cout << "Is there any shipping and handling charges?[y/n]: ";
    cin >> ship_handle_status;

    if ((char) tolower(ship_handle_status )== 'y')
    {
        ship_handle_cost = 10 * ordered_spools;
    }
    return ship_handle_cost;
}
//----------------------------------------------------------------
double specialCharges()
{
    char spec_charges_status;
    double spec_charges;
    cout << "\nIs there any special charges?[y/n]: ";
    cin >> spec_charges_status;
    
    if ((char) tolower(spec_charges_status )== 'y')
    {
        while (true)
        {
            cout << "Enter the special charges(USD): ";
            cin >> spec_charges;

            if (spec_charges<0)
            {
                cout << "Incorrect Input.\nTry Again." << endl;
                continue;
            }
            else 
            break;
        }    
    }
    return spec_charges;
}
//----------------------------------------------------------------

void orderDetails() 
{
    int ordered_spools = orderedSpools();
    int inStock_spools = inStockSpools();
    double spec_charges = specialCharges();

    cout << "\n\nNumber of ordered spools: " << ordered_spools << endl;
    cout << "Number of instock spools: " << inStock_spools << endl;

    // Number of spools ready ship
    int ready_spools = inStock_spools - ordered_spools;

    if (ready_spools < 0)
    {
        //backorder
        int backOrdered_spools = abs(inStock_spools - ordered_spools);
        cout << "Number of backordered spools: " << backOrdered_spools << endl;
        ready_spools = inStock_spools;
    }


    double subTotalCost = ready_spools * 100; //Each spools cost $100
    int ship_handle_cost = shippingCost(ready_spools); // Shipping and handling cost
    double totalCost = subTotalCost + ship_handle_cost + spec_charges;


    cout << "\n\nNumber of spools ready to ship: " << ready_spools << endl;
    cout << "Ready spools cost: $" << subTotalCost << endl;
    cout << "Shipping and handling cost: $" << ship_handle_cost << endl;
    cout << "Total cost: $" << totalCost << endl;
}


// main function
int main()
{
    orderDetails();
}

