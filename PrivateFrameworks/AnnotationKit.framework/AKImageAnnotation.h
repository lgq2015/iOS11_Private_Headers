/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKImageAnnotation : AKAnnotation <AKFlippableAnnotationProtocol, AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol> {
    bool  _hasShadow;
    bool  _horizontallyFlipped;
    UIImage * _image;
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
    bool  _verticallyFlipped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasShadow;
@property (readonly) unsigned long long hash;
@property bool horizontallyFlipped;
@property (retain) UIImage *image;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property double rotationAngle;
@property (readonly) Class superclass;
@property bool verticallyFlipped;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)hasShadow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (bool)horizontallyFlipped;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangle;
- (double)rotationAngle;
- (void)setHasShadow:(bool)arg1;
- (void)setHorizontallyFlipped:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setVerticallyFlipped:(bool)arg1;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;
- (bool)verticallyFlipped;

@end
