/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol> {
    double  _arrowHeadLength;
    double  _arrowHeadWidth;
    double  _arrowLineWidth;
}

@property double arrowHeadLength;
@property double arrowHeadWidth;
@property double arrowLineWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (double)arrowHeadLength;
- (double)arrowHeadWidth;
- (double)arrowLineWidth;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)setArrowHeadLength:(double)arg1;
- (void)setArrowHeadWidth:(double)arg1;
- (void)setArrowLineWidth:(double)arg1;

@end
