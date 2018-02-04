/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView {
    UIActivityIndicatorView * _activityIndicator;
    UIImageView * _iconImageView;
    UILabel * _labelView;
    SKUIViewElementLayoutContext * _layoutContext;
    SKUISettingsFamilyViewElement * _viewElement;
    long long  _viewState;
}

+ (struct CGSize { double x1; double x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_attributedStringForKey:(id)arg1;
- (id)_attributedStringForViewState;
- (void)_layoutWithActivityIndicator;
- (void)_layoutWithLockup;
- (void)_setViewState:(long long)arg1;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;

@end
