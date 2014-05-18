// Copyright (C) 2014 The Dirac developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
// DO NOT TOUCH UNLESS YOU KNOW WHAT YOU ARE DOING
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
typedef long long  int64;
static const int64 COIN = 100000000;
static const int64 CENT = 1000000;
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-


// Basics
static const char* LOWERCASE_NAME = "dirac";
static const char* CAPITALIZED_NAME = "DIRAC";
static const char* FIRSTCASE_NAME = "Dirac";
static const char* ISO4217_TRADING_SYMBOL = "XDQ";
static const char* WEBSITE = "dirac.io";
static const char* MONETARY_SYMBOL = "Ð";
static const char* MONETARY_SYMBOL_ASCII = "0208";

// Ports
const int MAINNET_RPC_PORT = 42024;
const int TESTNET_RPC_PORT = 24042;
const int MAINTNET_PORT = 11777;
const int TESTNET_PORT = 17771;
const int MERGED_MINING_CHAIN_ID = 0x0003; // Clones start at 0x0100

// Wallets
const int BASE58_PUBKEY_ADDRESS = 90; // "d"
const int BASE58_SCRIPT_ADDRESS = 8;
const int BASE58_PUBKEY_TEST_ADDRESS = 143;
const int BASE58_SCRIPT_TEST_ADDRESS = 171;


// DNS seeds
// Each pair gives a source name and a seed name.
// The first name is used as information source for addrman.
// The second name should resolve to a list of seed addresses.
static const char *strMainNetDNSSeed[][2] = {
    {"dirac.io", "dirac.io"},
	{"107.170.75.63", "107.170.75.63"},
    {NULL, NULL}
};

static const char *strTestNetDNSSeed[][2] = {
    {"dirac.io", "dirac.io"},
	{"107.170.75.63", "107.170.75.63"},
	{NULL, NULL}
};

// Money 
/** No amount larger than this (in satoshi) is valid */
static const int64 MAX_MONEY = 2272800 * COIN;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;

static const int64 nGenesisBlockRewardCoin = 50 * COIN;

// Target block time
static const int64 nTargetTimespan = 7 * 24 * 60 * 60; // one week
static const int64 nTargetSpacing = 60 * 3; // Block time
static const int64 nInterval = nTargetTimespan / nTargetSpacing;