/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPView : UIView {
    bool  _accessiblityConstraintsEnabled;
    bool  _constraintsLoaded;
}

@property (getter=isAccessiblityConstraintsEnabled, nonatomic) bool accessiblityConstraintsEnabled;
@property (getter=isConstraintsLoaded, nonatomic) bool constraintsLoaded;

+ (bool)requiresConstraintBasedLayout;

- (void)commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessiblityConstraintsEnabled;
- (bool)isConstraintsLoaded;
- (void)loadConstraints;
- (void)setAccessiblityConstraintsEnabled:(bool)arg1;
- (void)setConstraintsLoaded:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadConstraints;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateFonts;

@end
