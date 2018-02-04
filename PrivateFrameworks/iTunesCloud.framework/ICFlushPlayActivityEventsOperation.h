/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    SSVPlayActivityController * _playActivityController;
}

@property (nonatomic, readonly) SSVPlayActivityController *playActivityController;

- (void).cxx_destruct;
- (void)execute;
- (id)init;
- (id)initWithPlayActivityController:(id)arg1;
- (id)playActivityController;

@end
