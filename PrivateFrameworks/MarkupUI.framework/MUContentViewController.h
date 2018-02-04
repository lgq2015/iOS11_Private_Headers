/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUContentViewController : UIViewController {
    AKController * _annotationController;
    <MUContentViewControllerDelegate> * _delegate;
}

@property (retain) AKController *annotationController;
@property <MUContentViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)annotationController;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (void)setAnnotationController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
