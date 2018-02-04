/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    AKPopupAnnotation * _annotation;
    AKNoteEditorViewController * _contentViewController;
    <AKNoteEditorControllerDelegate> * _delegate;
}

@property (nonatomic, retain) AKPopupAnnotation *annotation;
@property (retain) AKNoteEditorViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKNoteEditorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *editedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_popupBackgroundColorForPopupAnnotation:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)annotation;
- (void)beginEditing:(bool)arg1;
- (id)contentViewController;
- (id)delegate;
- (id)editedText;
- (void)finishEditing;
- (void)hide;
- (void)noteEditorViewControllerDidBeginEditing:(id)arg1;
- (void)noteEditorViewControllerDidEndEditing:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)setAnnotation:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)show:(bool)arg1;
- (double)suggestedEditorHeightForWidth:(double)arg1;

@end
