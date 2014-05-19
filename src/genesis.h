// Copyright (C) 2014 The Dirac developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

const char* pszTimestamp = "This is how the world ends; Not with a bang, but a whimper.";

static CBigNum bnProofOfWorkLimit(~uint256(0) >> 24);
const uint256 MERKLE_ROOT = uint256("0x9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4");

//Main Net
/*
CBlock(hash=000000167716c24d6c0373b0964281cd145f9832558ae04d8a3e355a1d20bd1d, ver=112, hashPrevBlock=0000000000000000000000000000000000000000000000000000000000000000, hashMerkleRoot=9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4, nTime=1399109785, nBits=1e00ffff, nNonce=2062358, vtx=1)
2014-05-18 00:41:41   CTransaction(hash=9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4, ver=1, vin.size=1, vout.size=1, nLockTime=0)
    CTxIn(COutPoint(0000000000000000000000000000000000000000000000000000000000000000, 4294967295), coinbase 04ffff001d01043b5468697320697320686f772074686520776f726c6420656e64733b204e6f74207769746820612062616e672c206275742061207768696d7065722e)
    CTxOut(nValue=50.00000000, scriptPubKey=04678afdb0fe5548271967f1a67130)
  vMerkleTree: 9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4

*/
uint256 hashGenesisBlock("0x000000e02afef4712c99d5fa44cb5f76af046953cc31433bc97f7090ce6a50d8");
const int GENESIS_NONCE = 185337768;
static const unsigned int timeGenesisBlock = 1400471984;
// The message start string is designed to be unlikely to occur in normal data.
// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
// a large 4-byte int at any alignment.
unsigned char pchMessageStart[4] = { 0xf8, 0xbb, 0xa6, 0xb6 };

//Test Net
/*
CBlock(hash=00000008104d875bda492b437bb50e22b0cc6fab40d50c71ed067433ecc0853c, ver=112, hashPrevBlock=0000000000000000000000000000000000000000000000000000000000000000, hashMerkleRoot=9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4, nTime=1399109786, nBits=1e00ffff, nNonce=11272280, vtx=1)
2014-05-18 00:45:35   CTransaction(hash=9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4, ver=1, vin.size=1, vout.size=1, nLockTime=0)
    CTxIn(COutPoint(0000000000000000000000000000000000000000000000000000000000000000, 4294967295), coinbase 04ffff001d01043b5468697320697320686f772074686520776f726c6420656e64733b204e6f74207769746820612062616e672c206275742061207768696d7065722e)
    CTxOut(nValue=50.00000000, scriptPubKey=04678afdb0fe5548271967f1a67130)
  vMerkleTree: 9f47624cfc9f12dcfbaf31a93fea67fd5b2f2e072b8084d92475ae3c48ed70e4

*/
const int TESTNET_GENESIS_NONCE = 0;
uint256 hashTestNetGenesisBlock("0x00000008104d875bda492b437bb50e22b0cc6fab40d50c71ed067433ecc0853c");
static const unsigned int timeTestNetGenesisBlock = 1399109786;
// The message start string is designed to be unlikely to occur in normal data.
// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
// a large 4-byte int at any alignment.
unsigned char pchTestNetMessageStart[4] = { 0x0a, 0x10, 0x11, 0x08 };
