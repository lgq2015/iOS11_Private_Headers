/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPPortStatistics : NSObject {
    unsigned int  _allowedLostResponsesExceededCounter;
    unsigned int  _announceReceiptTimeoutCounter;
    NSString * _portIdentifier;
    long long  _portRole;
    long long  _portType;
    unsigned int  _receivedAnnounceCounter;
    unsigned int  _receivedDelayRequestCounter;
    unsigned int  _receivedDelayResponseCounter;
    unsigned int  _receivedFollowUpCounter;
    unsigned int  _receivedPDelayRequestCounter;
    unsigned int  _receivedPDelayResponseCounter;
    unsigned int  _receivedPDelayResponseFollowUpCounter;
    unsigned int  _receivedPacketDiscardCounter;
    unsigned int  _receivedSignalCounter;
    unsigned int  _receivedSyncCounter;
    unsigned int  _syncReceiptTimeoutCounter;
    unsigned int  _transmittedAnnounceCounter;
    unsigned int  _transmittedDelayRequestCounter;
    unsigned int  _transmittedDelayResponseCounter;
    unsigned int  _transmittedFollowUpCounter;
    unsigned int  _transmittedPDelayRequestCounter;
    unsigned int  _transmittedPDelayResponseCounter;
    unsigned int  _transmittedPDelayResponseFollowUpCounter;
    unsigned int  _transmittedPacketDiscardCounter;
    unsigned int  _transmittedSignalCounter;
    unsigned int  _transmittedSyncCounter;
}

@property (nonatomic, readonly) unsigned int allowedLostResponsesExceededCounter;
@property (nonatomic, readonly) unsigned int announceReceiptTimeoutCounter;
@property (nonatomic, readonly, copy) NSString *portIdentifier;
@property (nonatomic, readonly) long long portRole;
@property (nonatomic, readonly) long long portType;
@property (nonatomic, readonly) unsigned int receivedAnnounceCounter;
@property (nonatomic, readonly) unsigned int receivedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int receivedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int receivedFollowUpCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int receivedPacketDiscardCounter;
@property (nonatomic, readonly) unsigned int receivedSignalCounter;
@property (nonatomic, readonly) unsigned int receivedSyncCounter;
@property (nonatomic, readonly) unsigned int syncReceiptTimeoutCounter;
@property (nonatomic, readonly) unsigned int transmittedAnnounceCounter;
@property (nonatomic, readonly) unsigned int transmittedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int transmittedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int transmittedFollowUpCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int transmittedPacketDiscardCounter;
@property (nonatomic, readonly) unsigned int transmittedSignalCounter;
@property (nonatomic, readonly) unsigned int transmittedSyncCounter;

- (unsigned int)allowedLostResponsesExceededCounter;
- (unsigned int)announceReceiptTimeoutCounter;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(id)arg1;
- (id)portIdentifier;
- (long long)portRole;
- (long long)portType;
- (unsigned int)receivedAnnounceCounter;
- (unsigned int)receivedDelayRequestCounter;
- (unsigned int)receivedDelayResponseCounter;
- (unsigned int)receivedFollowUpCounter;
- (unsigned int)receivedPDelayRequestCounter;
- (unsigned int)receivedPDelayResponseCounter;
- (unsigned int)receivedPDelayResponseFollowUpCounter;
- (unsigned int)receivedPacketDiscardCounter;
- (unsigned int)receivedSignalCounter;
- (unsigned int)receivedSyncCounter;
- (unsigned int)syncReceiptTimeoutCounter;
- (unsigned int)transmittedAnnounceCounter;
- (unsigned int)transmittedDelayRequestCounter;
- (unsigned int)transmittedDelayResponseCounter;
- (unsigned int)transmittedFollowUpCounter;
- (unsigned int)transmittedPDelayRequestCounter;
- (unsigned int)transmittedPDelayResponseCounter;
- (unsigned int)transmittedPDelayResponseFollowUpCounter;
- (unsigned int)transmittedPacketDiscardCounter;
- (unsigned int)transmittedSignalCounter;
- (unsigned int)transmittedSyncCounter;

@end
