/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserDragManager : NSObject <CKBrowserDragViewControllerDelegate, UIGestureRecognizerDelegate> {
    id  _currentItem;
    <CKBrowserDragControllerDelegate> * _delegate;
    CKBrowserDragViewController * _dragViewController;
    CKBrowserDragWindow * _dragWindow;
    UILongPressGestureRecognizer * _gestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInView;
    UIView * _targetView;
    <CKBrowserDragControllerTranscriptDelegate> * _transcriptDelegate;
}

@property (nonatomic, retain) id currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserDragControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKBrowserDragViewController *dragViewController;
@property (nonatomic, retain) CKBrowserDragWindow *dragWindow;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationInView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *targetView;
@property (nonatomic) <CKBrowserDragControllerTranscriptDelegate> *transcriptDelegate;

- (void).cxx_destruct;
- (void)beginDraggingItem:(id)arg1 withAnimatedDragImage:(id)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)beginDraggingItem:(id)arg1 withDragImage:(id)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)browserDragViewController:(id)arg1 dragEndedWithTarget:(id)arg2;
- (void)browserDragViewController:(id)arg1 draggedWithTarget:(id)arg2;
- (id)currentItem;
- (void)dealloc;
- (id)delegate;
- (id)dragViewController;
- (id)dragWindow;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTargetView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView;
- (void)setCurrentItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragViewController:(id)arg1;
- (void)setDragWindow:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setLocationInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTargetView:(id)arg1;
- (void)setTranscriptDelegate:(id)arg1;
- (void)tapRecognized:(id)arg1;
- (id)targetView;
- (id)transcriptDelegate;

@end
