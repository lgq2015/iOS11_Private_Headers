/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKThoughtBubbleAnnotation : AKRectangularShapeAnnotation {
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointyBitPoint;
}

@property struct CGPoint { double x1; double x2; } pointyBitPoint;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (struct CGPoint { double x1; double x2; })pointyBitPoint;
- (void)setPointyBitPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;

@end
