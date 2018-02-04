/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol> {
    long long  _brushStyle;
    bool  _dashed;
    bool  _hasShadow;
    UIBezierPath * _path;
    bool  _pathIsDot;
    bool  _pathIsPrestroked;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectangle;
    double  _rotationAngle;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (getter=brushStyle) long long brushStyle;
@property (getter=isDashed) bool dashed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasShadow;
@property (readonly) unsigned long long hash;
@property (retain) UIBezierPath *path;
@property bool pathIsDot;
@property bool pathIsPrestroked;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property double rotationAngle;
@property (retain) UIColor *strokeColor;
@property double strokeWidth;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (long long)brushStyle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)hasShadow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (bool)isDashed;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)path;
- (bool)pathIsDot;
- (bool)pathIsPrestroked;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangle;
- (double)rotationAngle;
- (void)setBrushStyle:(long long)arg1;
- (void)setDashed:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setPathIsDot:(bool)arg1;
- (void)setPathIsPrestroked:(bool)arg1;
- (void)setRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (double)strokeWidth;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;

@end
