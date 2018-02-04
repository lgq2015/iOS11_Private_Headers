/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYServiceSyncSession : NSObject {
    bool  _complete;
    <PSYServiceSyncSessionDelegate> * _delegate;
    bool  _isComplete;
    NRDevice * _pairedDevice;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _sessionIdentifier;
    bool  _supportsMigrationSync;
    unsigned long long  _switchID;
    PSYSyncCoordinator * _syncCoordinator;
    unsigned long long  _syncSessionType;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic) <PSYServiceSyncSessionDelegate> *delegate;
@property (nonatomic, retain) NRDevice *pairedDevice;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long switchID;
@property (nonatomic) PSYSyncCoordinator *syncCoordinator;
@property (nonatomic) unsigned long long syncSessionType;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithQueue:(id)arg1 supportsMigrationSync:(bool)arg2;
- (bool)isComplete;
- (id)pairedDevice;
- (void)reportProgress:(double)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setPairedDevice:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSwitchID:(unsigned long long)arg1;
- (void)setSyncCoordinator:(id)arg1;
- (void)setSyncSessionType:(unsigned long long)arg1;
- (unsigned long long)switchID;
- (id)syncCoordinator;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (void)syncDidFailWithError:(id)arg1;
- (unsigned long long)syncSessionType;

@end
