/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWSSnapshot : NSObject {
    unsigned long long  _changeSeqno;
    struct nstat_counts { 
        unsigned long long nstat_rxpackets; 
        unsigned long long nstat_rxbytes; 
        unsigned long long nstat_txpackets; 
        unsigned long long nstat_txbytes; 
        unsigned long long nstat_cell_rxbytes; 
        unsigned long long nstat_cell_txbytes; 
        unsigned long long nstat_wifi_rxbytes; 
        unsigned long long nstat_wifi_txbytes; 
        unsigned long long nstat_wired_rxbytes; 
        unsigned long long nstat_wired_txbytes; 
        unsigned int nstat_rxduplicatebytes; 
        unsigned int nstat_rxoutoforderbytes; 
        unsigned int nstat_txretransmit; 
        unsigned int nstat_connectattempts; 
        unsigned int nstat_connectsuccesses; 
        unsigned int nstat_min_rtt; 
        unsigned int nstat_avg_rtt; 
        unsigned int nstat_var_rtt; 
    }  _counts;
    NSString * _provider;
    unsigned long long  _sourceIdentifier;
    NSDictionary * _traditionalDictionary;
}

@property (readonly) unsigned int _connectAttempts;
@property (readonly) unsigned int _connectSuccesses;
@property (readonly) double _rttAverage;
@property (readonly) double _rttMinimum;
@property (readonly) double _rttVariation;
@property (readonly) unsigned int _rxDuplicateBytes;
@property (readonly) unsigned int _rxOutOfOrderBytes;
@property (readonly) unsigned int _txRetransmittedBytes;
@property (readonly) unsigned long long changeSeqno;
@property (readonly) NSString *provider;
@property (readonly) unsigned long long rxBytes;
@property (readonly) unsigned long long rxCellularBytes;
@property (readonly) unsigned long long rxPackets;
@property (readonly) unsigned long long rxWiFiBytes;
@property (readonly) unsigned long long rxWiredBytes;
@property (readonly) unsigned long long sourceIdentifier;
@property (readonly) NSDictionary *traditionalDictionary;
@property (readonly) unsigned long long txBytes;
@property (readonly) unsigned long long txCellularBytes;
@property (readonly) unsigned long long txPackets;
@property (readonly) unsigned long long txWiFiBytes;
@property (readonly) unsigned long long txWiredBytes;

- (void).cxx_destruct;
- (unsigned int)_connectAttempts;
- (unsigned int)_connectSuccesses;
- (id)_createCountsForProvider:(int)arg1;
- (id)_initWithCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1 sourceIdent:(unsigned long long)arg2 seqno:(unsigned long long)arg3;
- (double)_rttAverage;
- (double)_rttMinimum;
- (double)_rttVariation;
- (unsigned int)_rxDuplicateBytes;
- (unsigned int)_rxOutOfOrderBytes;
- (unsigned int)_txRetransmittedBytes;
- (unsigned long long)changeSeqno;
- (id)description;
- (id)provider;
- (unsigned long long)rxBytes;
- (unsigned long long)rxCellularBytes;
- (unsigned long long)rxPackets;
- (unsigned long long)rxWiFiBytes;
- (unsigned long long)rxWiredBytes;
- (unsigned long long)sourceIdentifier;
- (id)traditionalDictionary;
- (unsigned long long)txBytes;
- (unsigned long long)txCellularBytes;
- (unsigned long long)txPackets;
- (unsigned long long)txWiFiBytes;
- (unsigned long long)txWiredBytes;

@end