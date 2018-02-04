/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSControlTableCell : PSTableCell {
    UIControl * _control;
}

@property (nonatomic, retain) UIControl *control;

- (void).cxx_destruct;
- (bool)canReload;
- (id)control;
- (void)controlChanged:(id)arg1;
- (id)controlValue;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)newControl;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setControl:(id)arg1;
- (id)valueLabel;

@end
