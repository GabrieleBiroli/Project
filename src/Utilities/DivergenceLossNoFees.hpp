#include "Utilities.hpp"
#include "../Protocols/UniswapV2Pool.hpp"
#include <iostream>
using namespace std;

// First I implement it for one pool using Gaussian Distribution
double Divergence_loss_sim_no_fee(double iteration_counter) {
    for (int i = 0; i < iteration_counter; i++) {
        Token *token1 = Token::GetToken("token1");
        Token *token2 = Token::GetToken("token2");
        UniswapV2Pool pool1({{token1, 1000}, {token2, 1000}});
        UniswapV2Pool pool2({{token1, 900}, {token2, 1111}});
        Account *LP = Account::GetAccount("LP");
        LP -> Deposit(token1, 20);
        LP -> Deposit(token2, 20);
        cout << "\n Token1 of LP before:" << LP -> GetQuantity(token1);
        cout << "\n Token2 of LP before:" << LP -> GetQuantity(token2);
        LP -> Provide(&pool1, {{token1, 20}, {token2, 20}});
        cout << "\n pool q token 1: " << pool1.GetQuantity(token1);
        cout << "\n pool q token 2: " << pool1.GetQuantity(token2);
        LP -> Withdraw(&pool2, LP -> GetQuantity(pool1.pool_token()));
        cout << "\n Token1 of LP after:" << LP -> GetQuantity(token1);
        cout << "\n Token2 of LP after:" << LP -> GetQuantity(token2);
    }
    return 0;
}