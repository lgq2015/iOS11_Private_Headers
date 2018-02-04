/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {
    double  _aggregateLabelWidth;
    SKUIInputViewElement * _inputViewElement;
    UILabel * _label;
    SKUIFieldSettingDescription * _settingDescription;
}

+ (struct CGSize { double x1; double x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_addInputWithElement:(id)arg1;
- (void)_addSubmitInputWithElement:(id)arg1;
- (id)_currentControllerValue;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEnabled:(bool)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)tintColorDidChange;

@end
