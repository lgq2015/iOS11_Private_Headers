/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTableViewCell : UITableViewCell {
    UIColor * _checkmarkAccessoryColor;
    UIColor * _customAccessoryColor;
    UIColor * _highlightColor;
    bool  _showsActionSpinner;
}

@property (nonatomic, copy) UIColor *checkmarkAccessoryColor;
@property (nonatomic, copy) UIColor *customAccessoryColor;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic) bool showsActionSpinner;

- (void).cxx_destruct;
- (id)_checkmarkImage:(bool)arg1;
- (id)_disclosureChevronImage:(bool)arg1;
- (id)checkmarkAccessoryColor;
- (id)customAccessoryColor;
- (id)highlightColor;
- (void)pk_applyAppearance:(id)arg1;
- (void)setCheckmarkAccessoryColor:(id)arg1;
- (void)setCustomAccessoryColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setShowsActionSpinner:(bool)arg1;
- (bool)showsActionSpinner;

@end
