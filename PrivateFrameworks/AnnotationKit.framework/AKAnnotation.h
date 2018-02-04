/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UUID;
    long long  _akSerializationPlatform;
    long long  _akSerializationVersion;
    id /* block */  _appearanceOverride;
    NSString * _author;
    AKAnnotation * _childAnnotation;
    NSString * _customPlaceholderText;
    bool  _editsDisableAppearanceOverride;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialDrawingBoundsForAppearanceOverride;
    bool  _isDraggingHandle;
    bool  _isEdited;
    bool  _isEditingText;
    bool  _isObservingForAppearance;
    bool  _isObservingForIsEdited;
    bool  _isReallyObservingForIsEdited;
    bool  _isTranslating;
    NSDate * _modificationDate;
    long long  _originalExifOrientation;
    double  _originalModelBaseScaleFactor;
    AKAnnotation * _parentAnnotation;
    bool  _shouldUseAppearanceOverride;
    bool  _shouldUsePlaceholderText;
    bool  _textIsClipped;
    bool  _textIsFixedHeight;
    bool  _textIsFixedWidth;
}

@property (readonly) NSString *UUID;
@property long long akSerializationPlatform;
@property long long akSerializationVersion;
@property (copy) id /* block */ appearanceOverride;
@property (copy) NSString *author;
@property AKAnnotation *childAnnotation;
@property (copy) NSString *customPlaceholderText;
@property (readonly) NSString *displayName;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingBounds;
@property bool editsDisableAppearanceOverride;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hitTestBounds;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialDrawingBoundsForAppearanceOverride;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } integralDrawingBounds;
@property bool isDraggingHandle;
@property bool isEdited;
@property bool isEditingText;
@property bool isTranslating;
@property (readonly) bool isUsingAppearanceOverride;
@property (retain) NSDate *modificationDate;
@property (nonatomic) long long originalExifOrientation;
@property (nonatomic) double originalModelBaseScaleFactor;
@property AKAnnotation *parentAnnotation;
@property (readonly) bool shouldBurnIn;
@property bool shouldObserveEdits;
@property bool shouldUseAppearanceOverride;
@property bool shouldUsePlaceholderText;
@property bool textIsClipped;
@property bool textIsFixedHeight;
@property bool textIsFixedWidth;

+ (id)annotationWithData:(id)arg1;
+ (id)defaultPlaceholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)adjustModelToCompensateForOriginalExif;
- (long long)akSerializationPlatform;
- (long long)akSerializationVersion;
- (id /* block */)appearanceOverride;
- (id)author;
- (id)childAnnotation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPlaceholderText;
- (id)dataRepresentation;
- (void)dealloc;
- (id)displayName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (bool)editsDisableAppearanceOverride;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialDrawingBoundsForAppearanceOverride;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })integralDrawingBounds;
- (bool)isDraggingHandle;
- (bool)isEdited;
- (bool)isEditingText;
- (bool)isTranslating;
- (bool)isUsingAppearanceOverride;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)modificationDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)originalExifOrientation;
- (double)originalModelBaseScaleFactor;
- (id)parentAnnotation;
- (void)setAkSerializationPlatform:(long long)arg1;
- (void)setAkSerializationVersion:(long long)arg1;
- (void)setAppearanceOverride:(id /* block */)arg1;
- (void)setAuthor:(id)arg1;
- (void)setChildAnnotation:(id)arg1;
- (void)setCustomPlaceholderText:(id)arg1;
- (void)setEditsDisableAppearanceOverride:(bool)arg1;
- (void)setInitialDrawingBoundsForAppearanceOverride:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsDraggingHandle:(bool)arg1;
- (void)setIsEdited:(bool)arg1;
- (void)setIsEditingText:(bool)arg1;
- (void)setIsTranslating:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setOriginalExifOrientation:(long long)arg1;
- (void)setOriginalModelBaseScaleFactor:(double)arg1;
- (void)setParentAnnotation:(id)arg1;
- (void)setShouldObserveEdits:(bool)arg1;
- (void)setShouldUseAppearanceOverride:(bool)arg1;
- (void)setShouldUsePlaceholderText:(bool)arg1;
- (void)setTextIsClipped:(bool)arg1;
- (void)setTextIsFixedHeight:(bool)arg1;
- (void)setTextIsFixedWidth:(bool)arg1;
- (bool)shouldBurnIn;
- (bool)shouldObserveEdits;
- (bool)shouldUseAppearanceOverride;
- (bool)shouldUsePlaceholderText;
- (bool)textIsClipped;
- (bool)textIsFixedHeight;
- (bool)textIsFixedWidth;
- (void)translateBy:(struct CGPoint { double x1; double x2; })arg1;

@end
