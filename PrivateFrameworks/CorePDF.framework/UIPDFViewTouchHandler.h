/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
    bool  _allowMenu;
    UILongPressGestureRecognizer * _briefPressRecognizer;
    UITapGestureRecognizer * _doubleTapRecognizer;
    bool  _firstTouch;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UIPDFMagnifierController * _magnifyController;
    UIMenuController * _menuController;
    UIPDFPageView * _pdfPageView;
    UIPDFSelectionController * _selectionController;
    bool  _showLoupe;
    bool  _showMagnifier;
    UITapGestureRecognizer * _singleTapRecognizer;
    bool  _trackingSelection;
    UITapGestureRecognizer * _twoFingerTapRecognizer;
    bool  _useDelegateForLinks;
}

@property bool allowMenu;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)releaseViewManager;

- (bool)allowMenu;
- (void)briefPressRecognized:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (bool)delegateGesture:(id)arg1 kind:(int)arg2;
- (void)disableRecognizers;
- (void)doubleTapRecognized:(id)arg1;
- (void)enableRecognizers;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideMenu;
- (id)initWithView:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (id)nextResponder;
- (bool)resignFirstResponder;
- (void)selectAll:(id)arg1;
- (void)setAllowMenu:(bool)arg1;
- (void)setFirstTouch;
- (void)showMenu;
- (void)singleTapRecognized:(id)arg1;
- (void)twoFingerTapRecognized:(id)arg1;

@end
