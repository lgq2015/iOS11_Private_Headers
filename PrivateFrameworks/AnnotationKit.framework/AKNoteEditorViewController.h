/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKNoteEditorViewController : UIViewController {
    AKPopupAnnotation * _annotation;
    <AKNoteEditorViewControllerDelegate> * _delegate;
    UITextView * _textView;
}

@property (retain) AKPopupAnnotation *annotation;
@property (nonatomic) <AKNoteEditorViewControllerDelegate> *delegate;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (id)annotation;
- (id)delegate;
- (void)setAnnotation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
