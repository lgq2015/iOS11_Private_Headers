/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXViewportDebugger : NSObject <SXViewportChangeListener> {
    SXViewportDebuggerOverlayView * _appearStateIndicator;
    SXViewportDebuggerOverlayView * _dynamicBoundsView;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) SXViewportDebuggerOverlayView *appearStateIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXViewportDebuggerOverlayView *dynamicBoundsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)appearStateIndicator;
- (id)colorForAppearState:(unsigned long long)arg1;
- (void)dealloc;
- (id)dynamicBoundsView;
- (id)initWithViewport:(id)arg1;
- (void)presentOnView:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
