/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKPhoneGlyphLayer : PKMicaLayer {
    CALayer * _highlightLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightOffscreenPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightOnscreenPosition;
    NSString * _phoneWiggleAnimationKey;
}

- (void).cxx_destruct;
- (void)_endPhoneWiggle;
- (void)_restartPhoneWiggleIfNecessary;
- (void)_startPhoneWiggle;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 package:(id)arg2;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;

@end
