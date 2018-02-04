/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionHealthMonitor : NSObject {
    struct ConnectionStats { 
        unsigned char totalPacketsReceived; 
        unsigned char connectionStats[2]; 
        unsigned char currentIndex; 
        double startTime; 
    }  _currentReceivingStats;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    unsigned char  _lastReportedIndex;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _peerStateRWLock;
    struct ConnectionStatsHistory { 
        unsigned char latestConnectionStatsIndex; 
        unsigned char totalPacketsReceived[5]; 
        unsigned char connectionStats[2][5]; 
        unsigned char connectionStatsRatio[2][5]; 
    }  _peerStatsHistory;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _stateRWLock;
    struct ConnectionStatsHistory { 
        unsigned char latestConnectionStatsIndex; 
        unsigned char totalPacketsReceived[5]; 
        unsigned char connectionStats[2][5]; 
        unsigned char connectionStatsRatio[2][5]; 
    }  _statsHistory;
}

@property <VCConnectionHealthMonitorDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (unsigned int)generateStatsBlob;
- (id)init;
- (bool)isHistoryImproved:(char *)arg1 currentIndex:(int)arg2;
- (bool)isHistoryValid:(char *)arg1;
- (bool)isPrimaryConnectionImprovedFromHistory:(struct ConnectionStatsHistory { unsigned char x1; unsigned char x2[5]; unsigned char x3[2][5]; unsigned char x4[2][5]; }*)arg1 withIndex:(int)arg2;
- (void)processPeerStatsBlob:(unsigned int)arg1;
- (void)receiveNewPacket:(bool)arg1;
- (void)reportConnectionHealthWithStatsHistory:(struct ConnectionStatsHistory { unsigned char x1; unsigned char x2[5]; unsigned char x3[2][5]; unsigned char x4[2][5]; }*)arg1 index:(int)arg2 isPeerStats:(bool)arg3;
- (void)resetConnectionStats:(bool)arg1;
- (void)resetHistory:(struct ConnectionStatsHistory { unsigned char x1; unsigned char x2[5]; unsigned char x3[2][5]; unsigned char x4[2][5]; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateRatiosForHistory:(struct ConnectionStatsHistory { unsigned char x1; unsigned char x2[5]; unsigned char x3[2][5]; unsigned char x4[2][5]; }*)arg1 withIndex:(int)arg2;
- (void)updateReceiveStats;
- (void)updateStatsHistory;

@end
