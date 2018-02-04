/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExplorerStatusView : UIView {
    NSArray * _dotLayers;
    bool  _observing;
    long long  _position;
    bool  _showsFullSignalStrength;
    long long  _signalStrengthBars;
    long long  _targetDotPosition;
}

@property (nonatomic, readonly) long long position;
@property (nonatomic) bool showsFullSignalStrength;
@property (nonatomic) long long signalStrengthBars;

+ (id)connectedDotColor;
+ (double)dotBorderWidth;
+ (double)dotDiameter;
+ (double)dotSpacing;
+ (id)noServiceDotColor;
+ (double)noServiceDotHeight;

- (void).cxx_destruct;
- (void)_updateDotFillStates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)position;
- (void)setDotPosition:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setShowsFullSignalStrength:(bool)arg1;
- (void)setSignalStrengthBars:(long long)arg1;
- (bool)showsFullSignalStrength;
- (long long)signalStrengthBars;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
