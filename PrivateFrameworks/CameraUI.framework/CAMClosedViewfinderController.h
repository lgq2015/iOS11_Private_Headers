/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMClosedViewfinderController : NSObject {
    NSMutableSet * __reasonsForClosingViewfinder;
    <CAMClosedViewfinderControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableSet *_reasonsForClosingViewfinder;
@property (nonatomic) <CAMClosedViewfinderControllerDelegate> *delegate;
@property (getter=isViewfinderClosed, nonatomic, readonly) bool viewfinderClosed;

- (void).cxx_destruct;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (void)_performDelayedRemovalOfReason:(id)arg1;
- (id)_reasonsForClosingViewfinder;
- (void)addClosedViewfinderReason:(long long)arg1;
- (void)cancelDelayedRemovalOfReason:(long long)arg1;
- (id)delegate;
- (id)init;
- (bool)isViewfinderClosed;
- (void)removeClosedViewfinderReason:(long long)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2;
- (void)setDelegate:(id)arg1;

@end
