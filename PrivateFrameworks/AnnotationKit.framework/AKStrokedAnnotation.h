/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol> {
    long long  _brushStyle;
    bool  _dashed;
    bool  _hasShadow;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property long long brushStyle;
@property (getter=isDashed) bool dashed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasShadow;
@property (readonly) unsigned long long hash;
@property (retain) UIColor *strokeColor;
@property double strokeWidth;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)brushStyle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasShadow;
- (id)initWithCoder:(id)arg1;
- (bool)isDashed;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)setBrushStyle:(long long)arg1;
- (void)setDashed:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (double)strokeWidth;

@end
