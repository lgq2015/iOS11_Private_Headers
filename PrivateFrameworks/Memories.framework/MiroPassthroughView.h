/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPassthroughView : UIView {
    <MiroPassthroughViewDelegate> * _delegate;
}

@property (nonatomic) <MiroPassthroughViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
