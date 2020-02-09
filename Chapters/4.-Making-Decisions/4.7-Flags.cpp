// 4.7  FLAGS

// A flag is a Boolean or integer variable that signals when a condition exists.

bool salesQuotaMet = false;

if (sales >= QUOTA_AMOUNT)
salesQuotaMet = true;
else
salesQuotaMet = false;

if (salesQuotaMet)
cout << "You have met your sales quota!\n";

// Equivalent code to the previous one
if (salesQuotaMet == true)
cout << "You have met your sales quota!\n";