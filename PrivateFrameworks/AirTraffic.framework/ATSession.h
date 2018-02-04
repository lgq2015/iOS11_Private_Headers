/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding> {
    bool  _cancelled;
    NSXPCConnection * _connection;
    NSString * _dataClass;
    NSXPCListenerEndpoint * _endpoint;
    NSError * _error;
    double  _finishTime;
    bool  _finished;
    NSObject<OS_dispatch_group> * _group;
    NSString * _localizedDescription;
    <ATMessageLink> * _messageLink;
    NSHashTable * _observers;
    NSMutableSet * _observing;
    double  _progress;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    NSString * _sessionIdentifier;
    NSMutableArray * _sessionTasks;
    NSMutableDictionary * _sessionTasksByIdentifier;
    NSString * _sessionTypeIdentifier;
    double  _startTime;
    bool  _suspended;
}

@property (getter=isCancelled) bool cancelled;
@property (nonatomic, retain) NSString *dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (copy) NSError *error;
@property (getter=isFinished) bool finished;
@property (readonly) unsigned long long hash;
@property (retain) NSString *localizedDescription;
@property (nonatomic) <ATMessageLink> *messageLink;
@property double progress;
@property (getter=isRunning) bool running;
@property (retain) NSString *sessionIdentifier;
@property (retain) NSString *sessionTypeIdentifier;
@property (readonly) Class superclass;
@property (getter=isSuspended) bool suspended;

+ (void)_cancelSessionWithIdentifier:(id)arg1;
+ (unsigned long long)_remoteActiveSessionCountWithTypeIdentifier:(id)arg1;
+ (id)_remoteSessionsWithTypeIdentifier:(id)arg1;
+ (unsigned long long)activeSessionCountWithSessionTypeIdentifier:(id)arg1;
+ (id)allSessions;
+ (void)initialize;
+ (id)sessionsWithSessionTypeIdentifier:(id)arg1;
+ (void)setSessionHost:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_beginTasks:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_keysToObserve;
- (void)_observeKeysForTask:(id)arg1;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)_stopObservingKeysForTask:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addSessionTasks:(id)arg1;
- (void)beginSessionTask:(id)arg1;
- (void)cancel;
- (id)dataClass;
- (id)debugDescription;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 sessionTypeIdentifier:(id)arg2;
- (id)initWithSessionTypeIdentifier:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isRunning;
- (bool)isSuspended;
- (id)localizedDescription;
- (id)messageLink;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)progress;
- (void)removeObserver:(id)arg1;
- (id)sessionIdentifier;
- (id)sessionTasks;
- (id)sessionTasksWithGroupingKey:(id)arg1;
- (id)sessionTypeIdentifier;
- (void)setCancelled:(bool)arg1;
- (void)setDataClass:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMessageLink:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRunning:(bool)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionTypeIdentifier:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)start;
- (void)updateSessionTask:(id)arg1;
- (void)waitToFinish;

@end
