/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkFaceTimeCell : CNContactCell {
    <CNPropertyCellDelegate> * _delegate;
    UILabel * _faceTimeLabel;
    NSDictionary * _labelTextAttributes;
    CNTransportButton * _transportIcon;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, retain) UILabel *faceTimeLabel;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (nonatomic, readonly) CNTransportButton *transportIcon;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)constantConstraints;
- (id)delegate;
- (id)faceTimeLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelTextAttributes;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (void)setFaceTimeLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon;

@end
