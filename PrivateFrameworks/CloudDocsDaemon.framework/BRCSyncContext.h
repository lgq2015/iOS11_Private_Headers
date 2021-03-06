/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncContext : NSObject {
    NSString * _admissionTicket;
    BRCThrottleBase * _applyThrottle;
    CKContainer * _ckContainer;
    NSString * _contextIdentifier;
    CDBudget * _dataBudget;
    NSDate * _dateWhenLastForegroundClientLeft;
    BRCTransferStream * _downloadStream;
    BRCThrottleBase * _downloadThrottle;
    CDAttribute * _duetAttribute;
    NSObject<OS_dispatch_queue> * _duetSetupQueue;
    CDBudget * _energyBudget;
    NSMutableSet * _foregroundClients;
    unsigned long long  _foregroundState;
    NSObject<OS_dispatch_queue> * _foregroundStateQueue;
    bool  _isCancelled;
    bool  _isShared;
    NSString * _lastForegroundClientDescription;
    int  _notifyTokenForFramework;
    BRCThrottleBase * _perItemSyncUpThrottle;
    BRCThrottleBase * _readerThrottle;
    BRCAccountSession * _session;
    NSString * _sourceAppIdentifier;
    NSObject<OS_dispatch_source> * _timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_source> * _timerForGraceForegroundPeriod;
    BRCThrottleBase * _uploadFileModifiedThrottle;
    BRCTransferStream * _uploadStream;
    BRCThrottleBase * _uploadThrottle;
}

@property (nonatomic, readonly) NSString *admissionTicket;
@property (nonatomic, readonly) BRCThrottleBase *applyThrottle;
@property (nonatomic, readonly) CKContainer *ckContainer;
@property (nonatomic, readonly) CKContainerID *ckContainerID;
@property (nonatomic, readonly) NSString *contextIdentifier;
@property (nonatomic, readonly) CDBudget *dataBudget;
@property (nonatomic, readonly) BRCUserDefaults *defaults;
@property (nonatomic, readonly) BRCTransferStream *downloadStream;
@property (nonatomic, readonly) BRCThrottleBase *downloadThrottle;
@property (nonatomic, readonly) CDBudget *energyBudget;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) BRCThrottleBase *perItemSyncUpThrottle;
@property (nonatomic, readonly) BRCThrottleBase *readerThrottle;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) BRCThrottleBase *uploadFileModifiedThrottle;
@property (nonatomic, readonly) BRCTransferStream *uploadStream;
@property (nonatomic, readonly) BRCThrottleBase *uploadThrottle;

+ (id)_contextIdentifierForMangledID:(id)arg1 metadata:(bool)arg2;
+ (id)_sourceAppIdentifierForMangledID:(id)arg1;
+ (id)contextIdentifierForMangledID:(id)arg1;
+ (id)transferContextForServerZone:(id)arg1 appLibrary:(id)arg2;

- (void).cxx_destruct;
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;
- (id)_database;
- (void)_notifyContainerBeingNowForeground;
- (void)_notifyFrameworkContainersMonitorWithState:(bool)arg1;
- (void)_setupDuetIfNeeded;
- (void)_setupDuetIfNeededInQueue;
- (void)addForegroundClient:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2;
- (id)admissionTicket;
- (bool)allowsCellularAccess;
- (id)applyThrottle;
- (void)cancel;
- (id)ckContainer;
- (id)ckContainerID;
- (void)close;
- (id)contextIdentifier;
- (id)dataBudget;
- (void)dealloc;
- (id)defaults;
- (id)description;
- (void)didReceiveHandoffRequest;
- (id)downloadStream;
- (id)downloadThrottle;
- (void)dumpToContext:(id)arg1;
- (id)energyBudget;
- (void)forceContainerForegroundForDuration:(double)arg1;
- (id)foregroundClients;
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 sourceAppIdentifier:(id)arg3 isShared:(bool)arg4;
- (bool)isForeground;
- (bool)isShared;
- (void)notifyDuetFromAccessByBundleID:(id)arg1;
- (id)perItemSyncUpThrottle;
- (id)readerThrottle;
- (void)removeForegroundClient:(id)arg1;
- (void)resume;
- (id)session;
- (void)setupIfNeeded;
- (id)uploadFileModifiedThrottle;
- (id)uploadStream;
- (id)uploadThrottle;
- (void)waitForAllOperations;

@end
