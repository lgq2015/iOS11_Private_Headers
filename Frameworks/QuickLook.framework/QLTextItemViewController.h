/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLTextItemViewController : QLItemViewController <QLPrintingProtocol, UITextViewDelegate> {
    NSAttributedString * _content;
    NSLayoutConstraint * _leftConstraint;
    UIPrintPageRenderer * _pageRenderer;
    UISimpleTextPrintFormatter * _printFormatter;
    NSLayoutConstraint * _rightConstraint;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIPrintPageRenderer *pageRenderer;
@property (readonly) UISimpleTextPrintFormatter *printFormatter;
@property (readonly) Class superclass;

+ (bool)providesCustomPrinter;
+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_updateConstraintConstants:(bool)arg1;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)pageRenderer;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (id)printFormatter;
- (id)printer;
- (id)registeredKeyCommands;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
