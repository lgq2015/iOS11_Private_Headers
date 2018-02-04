/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate> {
    bool  _didScroll;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    bool  _isScrolling;
    bool  _preventDidEndScrolling;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
    id /* block */  _scrollCompletion;
    bool  _scrolling;
}

@property (nonatomic, readonly) struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; } currentScrollContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BSUIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;
@property (readonly) Class superclass;

- (long long)_activeMethod;
- (id)_animationForAnimationSettings:(id)arg1;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (void)_bs_willBeginScrolling;
- (void)_didDidEndDeceleratingNotification:(id)arg1;
- (void)_didEndDraggingNotification:(id)arg1;
- (void)_didEndScrollAnimationNotification:(id)arg1;
- (void)_notifyDidScroll;
- (bool)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 withAnimation:(id)arg3 completion:(id /* block */)arg4;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animation:(id)arg2;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (void)_setCurrentContentOffsetImmediatelyIfScrollInterruptionAnimated:(bool)arg1;
- (void)_setScrollCompletion:(id /* block */)arg1;
- (void)_setScrolling:(bool)arg1;
- (void)_updateScrolling;
- (void)_willBeginDraggingNotification:(id)arg1;
- (struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })currentScrollContext;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isScrolling;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (bool)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 withAnimationSettings:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
