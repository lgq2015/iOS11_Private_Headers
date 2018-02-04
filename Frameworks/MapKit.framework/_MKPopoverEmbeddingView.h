/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPopoverEmbeddingView : UIView {
    <_MKPopoverEmbeddingViewWindowDelegate> * _windowDelegate;
}

@property (nonatomic) <_MKPopoverEmbeddingViewWindowDelegate> *windowDelegate;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setWindowDelegate:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)windowDelegate;

@end
