/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUICardSectionView : UIView <CRKCardSectionView> {
    UIView<CRKComposableView> * _composedSuperview;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _contentView;
    UIView<SiriUIReusableView> * _footerView;
    double  _footerViewHeight;
    UIView<SiriUIReusableView> * _headerView;
    double  _headerViewHeight;
}

@property (nonatomic, copy) NSString *cardSectionViewIdentifier;
@property (nonatomic) UIView<CRKComposableView> *composedSuperview;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView<SiriUIReusableView> *footerView;
@property (nonatomic) double footerViewHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView<SiriUIReusableView> *headerView;
@property (nonatomic) double headerViewHeight;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)composedSuperview;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)footerView;
- (double)footerViewHeight;
- (id)headerView;
- (double)headerViewHeight;
- (void)layoutSubviews;
- (void)removeFromComposedSuperview;
- (void)setComposedSuperview:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterViewHeight:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeaderViewHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
