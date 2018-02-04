/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKRectangularShapeAnnotation : AKShapeAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKTextAnnotationProtocol> {
    NSTextStorage * _annotationText;
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
    NSDictionary * _typingAttributes;
}

@property (retain) NSTextStorage *annotationText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isEditingText;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectangle;
@property double rotationAngle;
@property bool shouldUsePlaceholderText;
@property (readonly) Class superclass;
@property bool textIsClipped;
@property bool textIsFixedHeight;
@property bool textIsFixedWidth;
@property (copy) NSDictionary *typingAttributes;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)annotationText;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangle;
- (double)rotationAngle;
- (void)setAnnotationText:(id)arg1;
- (void)setRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)typingAttributes;

@end
