/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationService : NSObject {
    <FBUIApplicationServiceDelegate> * _delegate;
    FBSSerialQueue * _queue;
}

@property (nonatomic) <FBUIApplicationServiceDelegate> *delegate;
@property (nonatomic, readonly, retain) FBSSerialQueue *queue;

+ (id)sharedInstance;

- (void)dealloc;
- (id)delegate;
- (void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(id /* block */)arg2;
- (void)handleApplication:(id)arg1 setBadgeValue:(id)arg2;
- (void)handleApplicationProcess:(id)arg1 requestBrightness:(double)arg2 completion:(id /* block */)arg3;
- (bool)handleApplicationProcess:(id)arg1 setNextWakeInterval:(double)arg2;
- (void)handleDeleteAllSnapshotsForApplication:(id)arg1;
- (void)handleGetActiveInterfaceOrientationWithCompletion:(id /* block */)arg1;
- (void)handleSuspendApplicationProcess:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;

@end
