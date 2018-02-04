/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportObjectExtractor : NSObject {
    unsigned long long  __notificationTimeout;
    bool  __shouldStopProcessing;
    id /* block */  _animationIntervalCompletionProcessingBlock;
    id /* block */  _beginEventProcessingBlock;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    id /* block */  _emitEventProcessingBlock;
    id /* block */  _endEventProcessingBlock;
    SignpostIntervalBuilder * _intervalBuilder;
    id /* block */  _intervalCompletionProcessingBlock;
    id /* block */  _logMessageProcessingBlock;
    NSObject<OS_xpc_object> * _notificationConnection;
    NSObject<OS_dispatch_queue> * _notificationProcessingQueue;
    SignpostSupportObjectFilter * _objectFilter;
    unsigned long long  _processedEventCount;
    id /* block */  _processingCompletionBlock;
    SignpostSupportSubsystemCategoryFilter * _subsystemCategoryFilter;
    id /* block */  _timedOutBeginEventProcessingBlock;
    id /* block */  _unmatchedEndEventProcessingBlock;
}

@property (nonatomic) unsigned long long _notificationTimeout;
@property bool _shouldStopProcessing;
@property (nonatomic, copy) id /* block */ animationIntervalCompletionProcessingBlock;
@property (nonatomic, copy) id /* block */ beginEventProcessingBlock;
@property (nonatomic) bool buildAnimationCompositeIntervalTimelines;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (nonatomic, copy) id /* block */ emitEventProcessingBlock;
@property (nonatomic, copy) id /* block */ endEventProcessingBlock;
@property (nonatomic, readonly) SignpostIntervalBuilder *intervalBuilder;
@property (nonatomic, copy) id /* block */ intervalCompletionProcessingBlock;
@property (nonatomic, copy) id /* block */ logMessageProcessingBlock;
@property (nonatomic, retain) NSObject<OS_xpc_object> *notificationConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationProcessingQueue;
@property (nonatomic, retain) SignpostSupportObjectFilter *objectFilter;
@property (nonatomic) unsigned long long processedEventCount;
@property (nonatomic, copy) id /* block */ processingCompletionBlock;
@property (nonatomic, retain) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter;
@property (nonatomic, copy) id /* block */ timedOutBeginEventProcessingBlock;
@property (nonatomic, copy) id /* block */ unmatchedEndEventProcessingBlock;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

- (void).cxx_destruct;
- (void)_cleanupState;
- (bool)_generateIntervalFromEnd:(id)arg1;
- (bool)_hasSignpostProcessingBlock;
- (bool)_isTrackingIntervals;
- (unsigned long long)_notificationTimeout;
- (bool)_processSignpostEvent:(id)arg1;
- (bool)_processSignpostSupportLogMessage:(id)arg1;
- (void)_processingCompleted:(id)arg1;
- (bool)_shouldStopProcessing;
- (id /* block */)animationIntervalCompletionProcessingBlock;
- (id /* block */)beginEventProcessingBlock;
- (bool)buildAnimationCompositeIntervalTimelines;
- (id)completionSemaphore;
- (void)dealloc;
- (id /* block */)emitEventProcessingBlock;
- (id /* block */)endEventProcessingBlock;
- (void)finishProcessingSerializedData;
- (id)init;
- (id)intervalBuilder;
- (id /* block */)intervalCompletionProcessingBlock;
- (id /* block */)logMessageProcessingBlock;
- (id)notificationConnection;
- (id)notificationProcessingQueue;
- (id)objectFilter;
- (bool)processSerializedObjectsFromData:(id)arg1 errorOut:(id*)arg2;
- (unsigned long long)processedEventCount;
- (id /* block */)processingCompletionBlock;
- (void)setAnimationIntervalCompletionProcessingBlock:(id /* block */)arg1;
- (void)setBeginEventProcessingBlock:(id /* block */)arg1;
- (void)setBuildAnimationCompositeIntervalTimelines:(bool)arg1;
- (void)setEmitEventProcessingBlock:(id /* block */)arg1;
- (void)setEndEventProcessingBlock:(id /* block */)arg1;
- (void)setIntervalCompletionProcessingBlock:(id /* block */)arg1;
- (void)setLogMessageProcessingBlock:(id /* block */)arg1;
- (void)setNotificationConnection:(id)arg1;
- (void)setNotificationProcessingQueue:(id)arg1;
- (void)setObjectFilter:(id)arg1;
- (void)setProcessedEventCount:(unsigned long long)arg1;
- (void)setProcessingCompletionBlock:(id /* block */)arg1;
- (void)setSubsystemCategoryFilter:(id)arg1;
- (void)setTimedOutBeginEventProcessingBlock:(id /* block */)arg1;
- (void)setUnmatchedEndEventProcessingBlock:(id /* block */)arg1;
- (void)set_notificationTimeout:(unsigned long long)arg1;
- (void)set_shouldStopProcessing:(bool)arg1;
- (void)stopProcessing;
- (id)subsystemCategoryFilter;
- (id /* block */)timedOutBeginEventProcessingBlock;
- (id /* block */)unmatchedEndEventProcessingBlock;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (void)_processOSLogEventProxy:(id)arg1;
- (void)_processSignpostNotificationXPCDictionary:(id)arg1;
- (bool)processInMemoryDataWithStartDate:(id)arg1 endDate:(id)arg2 errorOut:(id*)arg3;
- (bool)processLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id*)arg4;
- (bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id*)arg2;

@end
