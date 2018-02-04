/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleContainerTitleView : UIView {
    NUPageStyle * _pageStyle;
    NUTitleView * _titleView;
}

@property (nonatomic, retain) NUPageStyle *pageStyle;
@property (nonatomic, readonly) NUTitleView *titleView;

- (void).cxx_destruct;
- (void)applyPageStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pageStyle;
- (void)setPageStyle:(id)arg1;
- (id)titleView;

@end
