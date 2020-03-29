struct EXCHANGE_RATE
{
	char CurrencyCode[4];
	char CurrencyName[32];
	char PublishTime[20];
	double BuyingRate = 0;
	double CashBuyingRate = 0;
	double SellingRate = 0;
	double CashSellingRate =0;
	double MiddleRate = 0;
};

typedef struct EXCHANGE_RATE ExchangeRate;
double ConvertCurrency(int real, const char* from, const char* to, double amount);
int GetBOCRatesByCode(const char* code, char* name, char* updateTime, double* rates);
int ReadBOCRatesByCode(const char* code, ExchangeRate* results);
int ReadAllBOCRates(ExchangeRate** result);
