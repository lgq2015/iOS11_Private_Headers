/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate> {
    AKAnnotation<AKTextAnnotationProtocol> * _annotation;
    AKController * _controller;
    double  _handleCompensatingScaleFactor;
    bool  _isInAdjustAnnotationFrameToFitText;
    bool  _isInEndEditing;
    double  _modelToEditorScaleFactor;
    AKPageController * _pageController;
    double  _renderingTextStorageScaleFactor;
    NSTextStorage * _textStorage;
    UITextView * _textView;
    UIView * _textViewContainer;
    CALayer * _textViewMaskLayer;
    NSUndoManager * _textViewUndoManager;
}

@property AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double handleCompensatingScaleFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditing;
@property bool isInAdjustAnnotationFrameToFitText;
@property bool isInEndEditing;
@property double modelToEditorScaleFactor;
@property AKPageController *pageController;
@property double renderingTextStorageScaleFactor;
@property (readonly) Class superclass;
@property (retain) NSTextStorage *textStorage;
@property (retain) UITextView *textView;
@property (retain) UIView *textViewContainer;
@property (retain) CALayer *textViewMaskLayer;
@property (retain) NSUndoManager *textViewUndoManager;

- (void).cxx_destruct;
- (void)_adjustAnnotationFrameToFitText;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(bool)arg3;
- (void)_commitToModelWithoutEndingEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editorFrameForTextBoundsInModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_endEditing;
- (void)_keyboardDidHide:(id)arg1;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(struct CGPoint { double x1; double x2; })arg3;
- (void)_performBlockOnMainThread:(id /* block */)arg1;
- (void)_registerForKeyboardNotifications;
- (void)_unregisterForKeyboardNotifications;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;
- (id)annotation;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(bool)arg3;
- (void)commitToModelWithoutEndingEditing;
- (id)controller;
- (void)dealloc;
- (void)endEditing;
- (double)handleCompensatingScaleFactor;
- (id)initWithController:(id)arg1;
- (bool)isEditing;
- (bool)isInAdjustAnnotationFrameToFitText;
- (bool)isInEndEditing;
- (double)modelToEditorScaleFactor;
- (id)pageController;
- (double)renderingTextStorageScaleFactor;
- (void)setAnnotation:(id)arg1;
- (void)setController:(id)arg1;
- (void)setHandleCompensatingScaleFactor:(double)arg1;
- (void)setIsInAdjustAnnotationFrameToFitText:(bool)arg1;
- (void)setIsInEndEditing:(bool)arg1;
- (void)setModelToEditorScaleFactor:(double)arg1;
- (void)setPageController:(id)arg1;
- (void)setRenderingTextStorageScaleFactor:(double)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTextViewContainer:(id)arg1;
- (void)setTextViewMaskLayer:(id)arg1;
- (void)setTextViewUndoManager:(id)arg1;
- (id)textStorage;
- (id)textView;
- (id)textViewContainer;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)textViewMaskLayer;
- (id)textViewUndoManager;
- (void)updateForTextAttributeChange;

@end
