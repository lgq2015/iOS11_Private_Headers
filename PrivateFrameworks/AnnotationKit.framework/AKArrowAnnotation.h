/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol> {
    NSTextStorage * _annotationText;
    unsigned long long  _arrowHeadStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _midPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    NSDictionary * _typingAttributes;
}

@property (retain) NSTextStorage *annotationText;
@property unsigned long long arrowHeadStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct CGPoint { double x1; double x2; } endPoint;
@property (readonly) unsigned long long hash;
@property bool isEditingText;
@property struct CGPoint { double x1; double x2; } midPoint;
@property bool shouldUsePlaceholderText;
@property struct CGPoint { double x1; double x2; } startPoint;
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
- (unsigned long long)arrowHeadStyle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (struct CGPoint { double x1; double x2; })midPoint;
- (void)setAnnotationText:(id)arg1;
- (void)setArrowHeadStyle:(unsigned long long)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMidPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTypingAttributes:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)typingAttributes;

@end
