/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileCoordinator : NSFileCoordinator {
    bool  _cancelled;
    id /* block */  _doneHandler;
    bool  _forRead;
    bool  _isUpdateForReconnecting;
    BRCAccountSession * _session;
    unsigned long long  _startStamp;
    NSObject<OS_dispatch_source> * _timer;
    NSURL * _url1;
    NSURL * _url2;
}

@property (nonatomic, readonly) bool forRead;
@property (nonatomic) bool isUpdateForReconnecting;

+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(bool)arg5;
+ (void)itemAtPath:(id)arg1 origLogicalName:(id)arg2 didBounceToNewLogicalName:(id)arg3;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidChangeAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;

- (void).cxx_destruct;
- (void)_didObtainCoordination:(id)arg1 context:(id)arg2 url1:(id)arg3 url2:(id)arg4 handler:(id /* block */)arg5 fcHandler:(id /* block */)arg6 error:(id)arg7;
- (void)_willRequestCoordinationWithContext:(id)arg1 url1:(id)arg2 url2:(id)arg3;
- (void)cancel;
- (void)cancelAfterDelay:(double)arg1;
- (bool)forRead;
- (id)initWithSession:(id)arg1 forRead:(bool)arg2 doneHandler:(id /* block */)arg3;
- (bool)isUpdateForReconnecting;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(id /* block */)arg4;
- (void)scheduleReadOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(id /* block */)arg4;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(bool)arg3 queue:(id)arg4 taskTracker:(id)arg5 accessor:(id /* block */)arg6;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 queue:(id)arg2 taskTracker:(id)arg3 accessor:(id /* block */)arg4;
- (void)setIsUpdateForReconnecting:(bool)arg1;

@end
