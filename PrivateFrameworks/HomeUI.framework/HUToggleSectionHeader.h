/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUToggleSectionHeader : UITableViewHeaderFooterView {
    <HUToggleSectionHeaderDelegate> * _delegate;
    UIButton * _toggleButton;
    unsigned long long  _toggleState;
}

@property (nonatomic) <HUToggleSectionHeaderDelegate> *delegate;
@property (nonatomic, retain) UIButton *toggleButton;
@property (nonatomic) bool toggleButtonHidden;
@property (nonatomic) unsigned long long toggleState;

- (void).cxx_destruct;
- (void)_toggle:(id)arg1;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setToggleButton:(id)arg1;
- (void)setToggleButtonHidden:(bool)arg1;
- (void)setToggleState:(unsigned long long)arg1;
- (id)toggleButton;
- (bool)toggleButtonHidden;
- (unsigned long long)toggleState;

@end
