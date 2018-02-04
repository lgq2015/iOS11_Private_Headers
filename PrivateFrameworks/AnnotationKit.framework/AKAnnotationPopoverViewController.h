/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationPopoverViewController : UIViewController <AKPopoverAnnotationEditor, UIGestureRecognizerDelegate> {
    <AKAnnotationEditorDelegate> * _delegate;
    bool  _editsOnLaunch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentationRect;
    UIView * _presentationView;
    AKAnnotation * mAnnotation;
    AKPageController * mAnnotationPageController;
    AKAnnotationTheme * mAnnotationTheme;
    AKTouchOutsideViewGestureRecognizer * mHideOnTouchGestureRecognizer;
    id  mObserver;
    int  mPosition;
}

@property (nonatomic, retain) AKAnnotation *annotation;
@property (nonatomic, retain) AKPageController *annotationPageController;
@property (nonatomic, retain) AKAnnotationTheme *annotationTheme;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAnnotationEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editsOnLaunch;
@property (readonly) unsigned long long hash;
@property (nonatomic) int position;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationRect;
@property (nonatomic, retain) UIView *presentationView;
@property (readonly) Class superclass;
@property (nonatomic, retain) IMTheme *theme;

- (void).cxx_destruct;
- (id)annotation;
- (id)annotationPageController;
- (id)annotationTheme;
- (bool)canPresentInPosition:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didHide;
- (void)didReceiveMemoryWarning;
- (void)didShow;
- (bool)editsOnLaunch;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hide;
- (void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_containerFrameForView:(id)arg1;
- (void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (int)position;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRect;
- (id)presentationView;
- (void)releaseOutlets;
- (void)setAnnotation:(id)arg1;
- (void)setAnnotationPageController:(id)arg1;
- (void)setAnnotationTheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditsOnLaunch:(bool)arg1;
- (void)setPosition:(int)arg1;
- (void)setPresentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationView:(id)arg1;
- (void)viewDidLoad;
- (void)willHide;
- (int)willPresentInPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2;
- (void)willShow;

@end
