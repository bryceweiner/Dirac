// Copyright (C) 2014 The Dirac developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

static CBigNum bnProofOfWorkLimit(~uint256(0) >> 24);
uint256 hashGenesisBlock("");
const uint256 MERKLE_ROOT = uint256("");

//Main Net
const int GENESIS_NONCE = 0;
static const unsigned int timeGenesisBlock = 1399109785;
// The message start string is designed to be unlikely to occur in normal data.
// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
// a large 4-byte int at any alignment.
unsigned char pchMessageStart[4] = { 0xf8, 0xbb, 0xa6, 0xb6 };

//Test Net
const int TESTNET_GENESIS_NONCE = 0;
uint256 hashTestNetGenesisBlock("");
static const unsigned int timeTestNetGenesisBlock = 1399109785;
// The message start string is designed to be unlikely to occur in normal data.
// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
// a large 4-byte int at any alignment.
unsigned char pchTestNetMessageStart[4] = { 0x0a, 0x10, 0x11, 0x08 };
