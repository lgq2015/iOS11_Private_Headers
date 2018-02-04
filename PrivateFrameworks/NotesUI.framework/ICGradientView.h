/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICGradientView : UIView

@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, copy) NSArray *gradientColors;
@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

+ (Class)layerClass;

- (struct CGPoint { double x1; double x2; })endPoint;
- (id)gradientColors;
- (id)gradientLayer;
- (id)locations;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGradientColors:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
