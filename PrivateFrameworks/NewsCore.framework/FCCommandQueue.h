/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCommandQueue : NSObject <FCAppActivityObserving, FCCommandDelegate, FCNetworkReachabilityObserving> {
    FCCloudContext * _context;
    NSObject<OS_dispatch_source> * _cooldownTimer;
    <FCCommandQueueDelegate> * _delegate;
    bool  _executingCommand;
    NSObject<OS_dispatch_group> * _executingCommandsGroup;
    NSMutableArray * _pendingCommands;
    NSObject<OS_dispatch_group> * _pendingCommandsGroup;
    FCKeyValueStore * _persistentStore;
    NSString * _persistentStorePath;
    bool  _suspended;
    long long  _urgency;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cooldownTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCCommandQueueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExecutingCommand, nonatomic) bool executingCommand;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *executingCommandsGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pendingCommands;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *pendingCommandsGroup;
@property (nonatomic, retain) FCKeyValueStore *persistentStore;
@property (nonatomic, copy) NSString *persistentStorePath;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic) long long urgency;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedWorkQueue;

- (void).cxx_destruct;
- (void)_addCommand:(id)arg1 saveCompletion:(id /* block */)arg2;
- (void)_applicationDidEnterBackground;
- (id)_decodeCommand:(id)arg1;
- (id)_deserializeCommandsFromStore:(id)arg1;
- (id)_encodeCommand:(id)arg1;
- (void)_executeNextCommand;
- (bool)_isEmpty;
- (void)_loadFromDisk;
- (long long)_qualityOfServiceForCommand:(id)arg1;
- (void)_savePendingCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)_scheduleCommandExecution;
- (void)_serializeCommands:(id)arg1 toStore:(id)arg2;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addCommand:(id)arg1;
- (void)addCommand:(id)arg1 saveCompletion:(id /* block */)arg2;
- (void)clear;
- (void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2;
- (id)context;
- (id)cooldownTimer;
- (void)dealloc;
- (id)delegate;
- (id)executingCommandsGroup;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 persistentStorePath:(id)arg2 urgency:(long long)arg3 suspended:(bool)arg4 delegate:(id)arg5;
- (id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(bool)arg5 delegate:(id)arg6;
- (id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(bool)arg3 delegate:(id)arg4;
- (bool)isExecutingCommand;
- (bool)isSuspended;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)pendingCommands;
- (id)pendingCommandsGroup;
- (id)persistentStore;
- (id)persistentStorePath;
- (void)resume;
- (void)setContext:(id)arg1;
- (void)setCooldownTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutingCommand:(bool)arg1;
- (void)setExecutingCommandsGroup:(id)arg1;
- (void)setPendingCommands:(id)arg1;
- (void)setPendingCommandsGroup:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setPersistentStorePath:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUrgency:(long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (long long)urgency;
- (id)workQueue;

@end
