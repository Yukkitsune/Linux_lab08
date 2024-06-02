#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <stdexcept>

#include "Account.h"
#include "Transaction.h"

class MAccount : public Account {
public:
    MAccount(int id, int balance) : Account(id, balance) {}

    MOCK_METHOD(int, GetBalance, (), (const, override));
    MOCK_METHOD(void, ChangeBalance, (int), (override));
    MOCK_METHOD(void, Lock, (), (override));
    MOCK_METHOD(void, Unlock, (), (override));
};

class MTransaction : public Transaction {
public:
    MTransaction() : Transaction() {}

    MOCK_METHOD(void, SaveToDataBase, (Account& from, Account& to, int sum), (override));
};
