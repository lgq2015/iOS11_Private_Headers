/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoListView : UIView {
    UIView * _footerView;
    NSArray * _groupedInfos;
    UIView * _headerView;
    NSArray * _infos;
    double  _interitemSpacing;
    double  _lineSpacing;
    long long  _maxLineCount;
}

@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, copy) NSArray *groupedInfos;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, copy) NSArray *infos;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long maxLineCount;

+ (id)infoListViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (void)_layouCellContentView:(id)arg1 inCellBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_maxWidthForGroupInfos:(id)arg1;
- (id)footerView;
- (id)groupedInfos;
- (id)headerView;
- (id)infos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interitemSpacing;
- (void)layoutSubviews;
- (double)lineSpacing;
- (long long)maxLineCount;
- (void)setFooterView:(id)arg1;
- (void)setGroupedInfos:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInfos:(id)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setMaxLineCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
