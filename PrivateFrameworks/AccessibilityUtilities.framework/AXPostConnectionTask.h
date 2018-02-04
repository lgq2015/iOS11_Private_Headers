/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPostConnectionTask : NSObject {
    bool  _didTimeout;
    id /* block */  _postConnectionBlock;
    AXAccessQueueTimer * _timeoutTimer;
}

@property (nonatomic) bool didTimeout;
@property (nonatomic, copy) id /* block */ postConnectionBlock;
@property (nonatomic, retain) AXAccessQueueTimer *timeoutTimer;

- (void).cxx_destruct;
- (void)_performTask;
- (bool)didTimeout;
- (id)initWithConnectBlock:(id /* block */)arg1 timeout:(double)arg2 accessQueue:(id)arg3;
- (void)performTask;
- (id /* block */)postConnectionBlock;
- (void)setDidTimeout:(bool)arg1;
- (void)setPostConnectionBlock:(id /* block */)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
