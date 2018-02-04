/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKScrollView : UIScrollView {
    bool  _mayPassScrollEventsToNextResponder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scrollableAreaBounds;
    bool  _shouldDisableScrollingWhenCursorIsHidden;
    unsigned long long  mAnimatingContentOffsetCount;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <UIScrollViewDelegate><TSKScrollViewDelegate> *delegate;
@property (nonatomic) bool mayPassScrollEventsToNextResponder;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollableAreaBounds;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;
@property (nonatomic) bool shouldDisableScrollingWhenCursorIsHidden;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } tsk_bounds;

- (id)contentView;
- (void)hideScrollIndicators;
- (bool)isScrolling;
- (void)layoutSubviews;
- (bool)mayPassScrollEventsToNextResponder;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollableAreaBounds;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setMayPassScrollEventsToNextResponder:(bool)arg1;
- (void)setShouldDisableScrollingWhenCursorIsHidden:(bool)arg1;
- (bool)shouldDisableScrollingWhenCursorIsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tsk_bounds;
- (struct CGSize { double x1; double x2; })tsk_contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
