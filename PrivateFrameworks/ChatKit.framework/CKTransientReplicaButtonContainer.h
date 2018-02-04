/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTransientReplicaButtonContainer : UIView {
    UIView * _cancelButtonCircle;
    CALayer * _cancelButtonGlyphLayer;
    UIView * _sendButtonCircle;
    CALayer * _sendButtonGlyphLayer;
}

@property (nonatomic, readonly) UIView *cancelButtonCircle;
@property (nonatomic, readonly) CALayer *cancelButtonGlyphLayer;
@property (nonatomic, readonly) UIView *sendButtonCircle;
@property (nonatomic, readonly) CALayer *sendButtonGlyphLayer;

- (void).cxx_destruct;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;
- (id)cancelButtonCircle;
- (id)cancelButtonGlyphLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hasDarkVibrancy:(bool)arg2 color:(BOOL)arg3;
- (id)sendButtonCircle;
- (id)sendButtonGlyphLayer;

@end
