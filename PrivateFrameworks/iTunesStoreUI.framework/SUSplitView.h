/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSplitView : UIView {
    UIView * _firstView;
    long long  _layoutType;
    double  _minimumPaneSize;
    UIView * _secondView;
    double  _splitPosition;
    bool  _vertical;
}

@property (nonatomic, retain) UIView *firstView;
@property (nonatomic) long long layoutType;
@property (nonatomic) double minimumPaneSize;
@property (nonatomic, retain) UIView *secondView;
@property (nonatomic) double splitPosition;
@property (getter=isVertical, nonatomic) bool vertical;

- (double)_minimumPaneSizeForLayout;
- (void)dealloc;
- (id)firstView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVertical;
- (void)layoutSubviews;
- (long long)layoutType;
- (double)minimumPaneSize;
- (id)secondView;
- (void)setFirstView:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setMinimumPaneSize:(double)arg1;
- (void)setSecondView:(id)arg1;
- (void)setSplitPosition:(double)arg1;
- (void)setVertical:(bool)arg1;
- (double)splitPosition;

@end
