/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSectionFooterView : UICollectionReusableView {
    UIButton * _disclosureButton;
    bool  _dividerHidden;
    UIView * _dividerLine;
    unsigned long long  _style;
}

@property (readonly) UIButton *disclosureButton;
@property (getter=isDividerHidden, nonatomic) bool dividerHidden;
@property (retain) UIView *dividerLine;
@property unsigned long long style;

+ (double)_bottomSpacingForStyle:(unsigned long long)arg1;
+ (double)_middleSpacingForStyle:(unsigned long long)arg1;
+ (double)_topSpacingForStyle:(unsigned long long)arg1;
+ (double)preferredHeightForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)disclosureButton;
- (id)dividerLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDividerHidden;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDividerHidden:(bool)arg1;
- (void)setDividerLine:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
