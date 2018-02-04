/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedTitleView : UIView <NUTitleViewDelegate> {
    <NUFeedTitleViewDelegate> * _delegate;
    NUTitleViewUpdate * _lastQueuedTitleViewUpdate;
    NUTitleView * _titleView;
    NSMutableArray * _titleViewUpdateStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUFeedTitleViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NUTitleViewUpdate *lastQueuedTitleViewUpdate;
@property (nonatomic, retain) <NUTitleViewStyler> *styler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NUTitleView *titleView;
@property (nonatomic, readonly) NSMutableArray *titleViewUpdateStack;

- (void).cxx_destruct;
- (void)applyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)applyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 force:(bool)arg3;
- (void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastQueuedTitleViewUpdate;
- (void)layoutSubviews;
- (void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)arg1;
- (void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)arg1 force:(bool)arg2;
- (void)pushApplyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)pushApplyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 force:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLastQueuedTitleViewUpdate:(id)arg1;
- (void)setStyler:(id)arg1;
- (id)styler;
- (id)titleView;
- (unsigned long long)titleViewAnimationForAnimation:(unsigned long long)arg1;
- (void)titleViewDidTapOnTitleView:(id)arg1;
- (id)titleViewUpdateForFeedTitleViewUpdate:(id)arg1 force:(bool)arg2;
- (id)titleViewUpdateStack;
- (bool)useCompactTitleViewUpdates;

@end
