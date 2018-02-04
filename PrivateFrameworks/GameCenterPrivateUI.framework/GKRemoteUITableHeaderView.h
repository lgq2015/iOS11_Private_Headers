/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory> {
    NSDictionary * _attributes;
    GKButton * _button;
    <GKRemoteUIAuxiliaryViewDelegate> * _delegate;
    double  _height;
    GKLabel * _label;
    int  _layoutStyle;
    NSArray * _replaceableConstraints;
    GKLabel * _subLabel;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, retain) GKButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKRemoteUIAuxiliaryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic, retain) GKLabel *label;
@property (nonatomic) int layoutStyle;
@property (nonatomic, retain) NSArray *replaceableConstraints;
@property (nonatomic, retain) GKLabel *subLabel;
@property (readonly) Class superclass;

- (void)applyConstraints;
- (id)attributes;
- (double)bottomMargin;
- (id)button;
- (void)buttonTapped:(id)arg1;
- (void)createButtonWithAttributes:(id)arg1;
- (void)createLabelWithAttributes:(id)arg1;
- (void)createSubLabelWithAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)height;
- (id)initWithAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (double)labelBaselineOffset;
- (double)labelBaselineToButtonBaselineOffset;
- (double)labelBaselineToSubLabelTopOffset;
- (double)labelTopOffset;
- (int)layoutStyle;
- (double)leftMargin;
- (void)objectModelDidChange:(id)arg1;
- (id)replaceableConstraints;
- (double)rightMargin;
- (void)setAttributes:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setSubLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subLabel;

@end
