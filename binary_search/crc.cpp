#include <iostream>
#include <string>
using namespace std;

// Function for modulo-2 division
string modulo2Division(string data, string divisor)
{
    int dataLen = data.length();
    int divisorLen = divisor.length();

    string remainder = data;

    for (int i = 0; i <= dataLen - divisorLen; i++)
    {
        if (remainder[i] == '1')
        {
            for (int j = 0; j < divisorLen; j++)
            {
                if (remainder[i + j] == divisor[j])
                    remainder[i + j] = '0';
                else
                    remainder[i + j] = '1';
            }
        }
    }

    return remainder.substr(dataLen - divisorLen + 1);
}

int main()
{
    string data;
    string divisor;
    string appendedData;
    string crc;
    string transmittedData;
    string receivedData;

    // ================= SENDER =================
    cout << "================ SENDER ================\n";

    cout << "Enter data bits: ";
    cin >> data;

    cout << "Enter generator (divisor): ";
    cin >> divisor;

    // Append zeros
    appendedData = data + string(divisor.length() - 1, '0');

    // Calculate CRC
    crc = modulo2Division(appendedData, divisor);

    // Create transmitted data
    transmittedData = data + crc;

    cout << "\nAppended Data : " << appendedData << endl;
    cout << "CRC           : " << crc << endl;
    cout << "Data Sent     : " << transmittedData << endl;

    // ================= RECEIVER =================
    cout << "\n=============== RECEIVER ===============\n";

    cout << "Enter received data: ";
    cin >> receivedData;

    // Calculate remainder
    string remainder = modulo2Division(receivedData, divisor);

    cout << "\nRemainder after division: " << remainder << endl;

    // Check remainder
    bool valid = true;

    for (char bit : remainder)
    {
        if (bit == '1')
        {
            valid = false;
            break;
        }
    }

    // ================= RESULT =================
    cout << "\n================ RESULT ================\n";

    if (valid)
    {
        cout << "Data received is VALID." << endl;
        cout << "No error detected." << endl;
    }
    else
    {
        cout << "Data received is INVALID." << endl;
        cout << "Error detected in the received data." << endl;
    }

    return 0;
}