/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKRulerLayer : CALayer {
    PKInternalDrawingRulerView * _drawingView;
}

@property (nonatomic) PKInternalDrawingRulerView *drawingView;
@property (nonatomic, readonly) long long userAngle;

- (void).cxx_destruct;
- (bool)_accessibilityScrollToVisible;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)drawingView;
- (bool)isAccessibilityElement;
- (id)locationDescriptionForSpeaking;
- (bool)makeHorizontal;
- (bool)makeVertical;
- (void)setDrawingView:(id)arg1;
- (long long)userAngle;

@end
