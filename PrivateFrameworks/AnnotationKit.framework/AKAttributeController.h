/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAttributeController : NSObject {
    unsigned long long  _arrowHeadStyle;
    long long  _brushStyle;
    AKController * _controller;
    UIColor * _fillColor;
    UIFont * _font;
    bool  _hasShadow;
    long long  _highlightStyle;
    PKInk * _ink;
    NSString * _inkIdentifier;
    UIColor * _strokeColor;
    bool  _strokeIsDashed;
    double  _strokeWidth;
    NSDictionary * _textAttributes;
    bool  _useThickInks;
    AKPageModelController * modelControllerToObserveForSelections;
}

@property unsigned long long arrowHeadStyle;
@property long long brushStyle;
@property AKController *controller;
@property (retain) UIColor *fillColor;
@property (retain) UIFont *font;
@property bool hasShadow;
@property (nonatomic) long long highlightStyle;
@property (nonatomic, retain) PKInk *ink;
@property (nonatomic, retain) NSString *inkIdentifier;
@property (nonatomic, retain) AKPageModelController *modelControllerToObserveForSelections;
@property (nonatomic, retain) UIColor *strokeColor;
@property bool strokeIsDashed;
@property double strokeWidth;
@property (retain) NSDictionary *textAttributes;
@property (nonatomic) bool useThickInks;

+ (id)defaultFont;
+ (id)defaultTextAttributes;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_allAnnotations:(id)arg1 all:(bool*)arg2 atLeastOneShare:(bool*)arg3 attributeFromTag:(long long)arg4;
- (bool)_isEnabledForSender:(id)arg1 segment:(long long)arg2 withSelectedAnnotations:(id)arg3;
- (void)_persistCurrentAttributes;
- (void)_restorePersistedAttributes;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 segment:(long long)arg2;
- (void)_updateInk;
- (void)_updateStateOnSender:(id)arg1 segment:(long long)arg2;
- (bool)_updateStateOnSender:(id)arg1 segment:(long long)arg2 fromSelectedAnnotations:(id)arg3;
- (void)_updateStateOnSenderFromSelf:(id)arg1 segment:(long long)arg2;
- (unsigned long long)arrowHeadStyle;
- (long long)brushStyle;
- (id)controller;
- (id)fillColor;
- (id)font;
- (bool)hasShadow;
- (long long)highlightStyle;
- (id)initWithController:(id)arg1;
- (id)ink;
- (id)inkIdentifier;
- (bool)isAttributeSenderEnabled:(id)arg1 segment:(long long)arg2;
- (id)modelControllerToObserveForSelections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performAttributeActionForSender:(id)arg1 segment:(long long)arg2;
- (void)resetToLastDrawingInk;
- (void)restoreStrokeColorToSystemDefault;
- (void)setArrowHeadStyle:(unsigned long long)arg1;
- (void)setBrushStyle:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setDefaultInkIdentifier;
- (void)setFillColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setHighlightStyle:(long long)arg1;
- (void)setInk:(id)arg1;
- (void)setInkIdentifier:(id)arg1;
- (void)setModelControllerToObserveForSelections:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeIsDashed:(bool)arg1;
- (void)setStrokeWidth:(double)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setUseThickInks:(bool)arg1;
- (id)strokeColor;
- (bool)strokeColorIsEqualTo:(id)arg1;
- (bool)strokeIsDashed;
- (double)strokeWidth;
- (void)syncFillColorOnSelectionToUI;
- (void)syncStrokeColorOnSelectionToUI;
- (id)textAttributes;
- (void)updateAttributeSenderState:(id)arg1 segment:(long long)arg2 enabled:(bool)arg3;
- (bool)useThickInks;

@end
