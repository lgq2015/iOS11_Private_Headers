/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadHandlerSession : SSDownloadSession {
    NSString * _downloadPhase;
    NSNumber * _duetTimeoutInterval;
}

@property bool blocksOtherDownloads;
@property bool canBePaused;
@property (readonly) NSString *downloadPhase;
@property (readonly) NSNumber *duetTimeoutInterval;
@property bool needsPowerAssertion;

- (void)_finishWithType:(int)arg1 error:(id)arg2;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (void)_setBool:(bool)arg1 forSessionProperty:(const char *)arg2;
- (bool)blocksOtherDownloads;
- (bool)canBePaused;
- (void)dealloc;
- (void)disavowSessionWithError:(id)arg1;
- (id)downloadPhase;
- (id)duetTimeoutInterval;
- (void)finishSessionWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)needsPowerAssertion;
- (void)releaseSessionControl;
- (void)setBlocksOtherDownloads:(bool)arg1;
- (void)setCanBePaused:(bool)arg1;
- (void)setNeedsPowerAssertion:(bool)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)setStatusDescription:(id)arg1;

@end
