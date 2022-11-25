class BankUtils {
    double interestRate;

  public:
    BankUtils() {
      // predefined interest rate
      interestRate = 10.0;
    }

    // Method takes full amount and returns the value after the decimal point (cents)
    int getCents(double amount) {
    }

    // Method takes full amount and returns the value before the decimal point (euros)
    int getEuros(double amount) {
    }

    // Method takes credit amount and credit period in months, applies the predefined interestRate
    // and produces the total amount: creditAmount + interestRate over given months
    double calculateInterestRate(double creditAmount, unsigned int months) {
    }
};
