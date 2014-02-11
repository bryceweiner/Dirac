// Change these
static const unsigned int MAIN_RPCPORT = 11011;
static const unsigned int MAIN_DEFAULTPORT = 10101;
static const unsigned int TEST_RPCPORT = 22022;
static const unsigned int TEST_DEFAULTPORT = 20202;

/** No amount larger than this (in satoshi) is valid */
static const int64 MAX_MONEY = 7000000000 * COIN; // 7 billion

/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 120;

/** Fees smaller than this (in satoshi) are considered zero fee (for transaction creation) */
int64 CTransaction::nMinTxFee = 10000;  // Override with -mintxfee
/** Fees smaller than this (in satoshi) are considered zero fee (for relaying) */
int64 CTransaction::nMinRelayTxFee = 10000;

static const unsigned int nMainNonce = 120396719;

const char* pszTimestamp = "Not with a bang, but a whimper.";

// The message start string is designed to be unlikely to occur in normal data.
// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
// a large 4-byte int at any alignment.
unsigned char pchMessageStart[4] = { 0xf9, 0xbe, 0xb4, 0xd2 };
uint256 hashGenesisBlock("0x");
uint256 hashMerkleRoot("0x");
// http://www.epochconverter.com/
static const unsigned int timeGenesisBlock = 1381036817;
static CBigNum bnProofOfWorkLimit(~uint256(0) >> 24);


static const unsigned int nTestNonce = 120396719;
unit256 hashGenesisBlockTestNet("0x");
uint256 hashMerkleRootTestNet("0x");
unsigned char pchMessageStartTestNet[4] = { 0x9f, 0xeb, 0x4b, 0x2d };
static const unsigned int timeTestNetBlock = 1381036817;

