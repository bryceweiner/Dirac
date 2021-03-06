The Blake Ecosystem
=================
__*What is Blakecoin?*__
---------------------
Blakecoin is an experimental new digital currency that enables instant payments to
anyone, anywhere in the world. Blakecoin uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing of coins are carried
out collectively by the network.

__*What is Photon?*__
---------------------
A clone of Blakecoin with a few changes.

* The standard block award of Photon is 32,768 BUT as the block chain grows the award will increase. The amount it increases is directly related to the current difficulty and height of the blockchain.  Miners will get 32,768 coins plus the square root of blockchain height multiplied by the current difficulty.

* Still as Photon's are plentiful in the universe the max money is set to 90,000,000,000. That is 90 Billion Photons. 

* Difficulty retargets every 20 blocks with a target of a new block to be produced every 3 minutes.

* Up to block 3500 the max adjustment is 15% up each retarget.
 * After block 3500 the max adjustment is 3% up each retarget.

__*What is BlakeBitcoin?*__
---------------------
A Clone of Bitcoin same reward structure Starting with 50 coins per block and a total of 21 million coins 
The Block target time is 1/4 of Bitcoin's to account for extra hashing speed of Blake-256
The difficulty retarget at 8064 blocks and the reward halving every 210,000 blocks 
The difficulty adjustment is also same as per Bitcoin
  
__*What is Dirac?*__
====================
A Revolution In Cryptocurrency and Finance
---------------------------------------
![Dirac](http://i58.tinypic.com/29osrnk.jpg "Dirac")
>"As Dirac was to Einstein, so now Dirac is to Bitcoin."

Dirac is intented not simply as a currency, but as a stable financial instrument capable of carrying vast amounts of wealth in a safe, secure, and in a manner more economically efficient than Bitcoin.  Free-market managed economic stability is a concept introduced by [NautilusCoin](http://NautilusCoin.com) and then enhanced by Dirac.  Dirac will be traded in an exclusive currency pairing against NautilusCoin (NAUT market) on [AllCrypt](http://AllCrypt.com). Between 90 and 100 days after launch, the market will be gradually purchased at fair market value for 25,000NAUT over a period of 30 days, backing the currency network and fixing the price at that moment at roughly 0.07NAUT.

Dirac has a specially modified codebase which allows for a process of currency cloning that is simpler than ever before. Thousands of clones can now be created and each blockchain comes pre-built with merged mining.

* ISO 4217 Trading Symbol : XDQ
* Monetary Symbol : Ð 
* Target block time : 180 seconds 
* Difficulty retarget : 2,016 blocks (roughly every 4 days) 
* Maximum Coins: Ð2,272,800
* Starting block reward : Ð8 
 * First reward reduction @ 43201 : Ð1.25 
 * Second reward reduction @ 744001 : Ð0.75 
 * Third reward reduction @ 1448001) : Ð0.5 
 * Fourth reward reduction @ 2145601 : Ð0.25 
 * Fifth reward reduction (inflation mode) @ 2846401 : Ð0.01 

Useful Information
-------------------
* [Windows Wallet](http://blakecoin.org/Dirac-0.8.9.1-WIN.7z)
* [Linux Wallet](http://blakecoin.org/Dirac-0.8.9.1-LIN.7z)

```
addnode=146.185.135.24 
addnode=162.243.14.130 
addnode=188.226.213.85 
addnode=107.170.140.27
```

__Official Blake Ecosystem Mining Information and Discussion Thread__
* [https://bitcointalk.org/index.php?topic=306894.0](https://bitcointalk.org/index.php?topic=306894.0)

__Official Blake Ecosystem Website__
* [http://www.blakecoin.org](http://www.blakecoin.org)

__Official Blake Ecosystem Merged Mining Pool__
* US East: [http://ny2.blakecoin.com/](http://ny2.blakecoin.com/)
* US West: [http://la1.blakecoin.com/](http://la1.blakecoin.com/)
* Europe: [http://eu3.blakecoin.com](http://eu3.blakecoin.com)
 * GPU Mining: Yes.
 * FPGA Mining: Yes.
 * ASIC Mining : __*NO*__

__Blake-256 optimization thread on CUDAMiners__
* [http://www.cudaminers.net/forum/settings-benchmarks-for-blake-256-merged-mining-thread.html](http://www.cudaminers.net/forum/settings-benchmarks-for-blake-256-merged-mining-thread.html)
started by @cuttlefish_btc 

__Real world example of 280X Settings at 2.4Gh/s__

![Technically Superior](https://pbs.twimg.com/media/Bn4z2w7CMAA_gUf.png "Technically Superior")

__Official Dirac Exchange (Blake Ecosystem Present)__
* [http://allcrypt.com](http://allcrypt.com)

__What Is Merged Mining?__
* [http://bitcoin.stackexchange.com/questions/273/how-does-merged-mining-work](http://bitcoin.stackexchange.com/questions/273/how-does-merged-mining-work)

__The Science of the Blake Advantage Over Bitcoin__
* [https://131002.net/blake/blake.pdf](https://131002.net/blake/blake.pdf)

__License__

Dirac is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

BlakeBitcoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Photon is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.


Blakecoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

__Notes__

Forked from Bitcoin reference wallet 0.8.6 and BlakeBitcoin

BlakeBitcoin is a cryptocurrency designed to use the Blake 256 algorithm cloned from BlakeBitcoin.

Blake-256(optimized) faster than scrypt and faster than sha256 in C (asm is still faster for sha256d)

The algorithm was written as a candidate for sha3, Based on round one candidate code from the sphlib 2.1 and reduced the compression function to 8.

Ubuntu 12.04 dependancies that are used on the Linux build machine:

git-core build-essential libssl-dev libboost-all-dev libdb5.1-dev libdb5.1++-dev libgtk2.0-dev libminiupnpc-dev qt4-qmake mingw32 synaptic qt-sdk qt4-dev-tools libqt4-dev libqt4-core libqt4-gui libdb++-dev

__Tweaks__

Removed some of the double hashing from the wallet as it is wasteful on compute, No changes to the ecdsa public/private function as that has proven to be secure so far on bitcoin.
