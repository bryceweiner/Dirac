#include "bignum.h"

static const char* pszCoinName = "Dirac";
static const char* pszCoinLowercase = "dirac";
static const char* pszCoinUppercase = "DIRAC";
static const char* pszCoinAbbr = "DAC";

// Change these
static const unsigned int MAIN_RPCPORT = 11011;
static const unsigned int MAIN_DEFAULTPORT = 10101;
static const unsigned int TEST_RPCPORT = 22022;
static const unsigned int TEST_DEFAULTPORT = 20202;

/** No amount larger than this (in satoshi) is valid */
static const int64 MAX_MONEY = 7000000000 * COIN; // 7 billion
// Now go to UTIL.H, line 36
static const int64 nGenesisBlockRewardCoin = 5 * COIN;
static const int64 nBlockRewardStartCoin = 25 * COIN;


/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 120;
/** Fees smaller than this (in satoshi) are considered zero fee (for transaction creation) */
static const int MINTXFEE = 10000; // Override with -mintxfee
/** Fees smaller than this (in satoshi) are considered zero fee (for relaying) */
static const int MINRELAYTXFEE = 10000;

//Settings for Kimoto's Gravity Well
static const float gravitationalPull = 28.2;
static const int transationTimeTarget = 7 * 60; // in seconds
static const int secondsInADay = 60 * 60 * 24;
static const float minimumGravitationalLensing = 0.23; // in seconds
static const float maximumGravitationalLensing = 1; // in seconds

// Don't mess with this if you don't know what it is.  If you do know what it is, it's nice to have it here.
static CBigNum bnProofOfWorkLimit(~uint256(0) >> 24);

// The message start string is designed to be unlikely to occur in normal data.
// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
// a large 4-byte int at any alignment.
// http://www.epochconverter.com/
// Main net
static const unsigned char pchMessageStartMainNet[4] = { 0xf9, 0xbe, 0xb4, 0xd2 };
//Test net
static const unsigned char pchMessageStartTestNet[4] = { 0x9f, 0xeb, 0x4b, 0x2d };

