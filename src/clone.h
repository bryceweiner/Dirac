// Copyright (C) 2014 The Dirac developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

const char* LOWERCASE_NAME = "dirac";
const char* CAPITALIZED_NAME = "DIRAC";
const char* FIRSTCASE_NAME = "Dirac";
const char* ISO4217_TRADING_SYMBOL = "XDQ";
const char* WEBSITE = "dirac.io"
const char* MONETARY_SYMBOL = "Ð";
const char* MONETARY_SYMBOL_ASCII = "\u208";
const int BASE58_PUBKEY_ADDRESS = 90; // "d"
const int BASE58_SCRIPT_ADDRESS = 8,
const int BASE58_PUBKEY_ADDRESS_TEST = 143,
const int BASE58_SCRIPT_ADDRESS_TEST = 171,
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

const char* pszTimestamp = "This is how the world ends; Not with a bang, but a whimper.";

/** No amount larger than this (in satoshi) is valid */
static const int64 MAX_MONEY = 2272800 * COIN;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;

static const int64 nGenesisBlockRewardCoin = 50 * COIN;
static const int64 nTargetTimespan = 7 * 24 * 60 * 60; // one week
static const int64 nTargetSpacing = 60 * 3; // Block time
static const int64 nInterval = nTargetTimespan / nTargetSpacing;


// DO NOT TOUCH UNLESS YOU KNOW WHAT YOU ARE DOING
static const int64 COIN = 100000000;
static const int64 CENT = 1000000;
