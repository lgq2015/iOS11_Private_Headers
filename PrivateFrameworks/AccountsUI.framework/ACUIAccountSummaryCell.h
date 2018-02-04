/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountSummaryCell : PSTableCell {
    ACAccount * _account;
    UILabel * _dataclassesLabel;
    NSString * _desiredValue;
    NSSet * _enabledDataclasses;
    long long  _style;
    NSSet * _supportedDataclasses;
    bool  _useCustomDetailsText;
}

+ (void)_configureSpecifier:(id)arg1 forAccount:(id)arg2 withStyle:(long long)arg3 valueText:(id)arg4;
+ (id)_nameForAccountSpecifier:(id)arg1 withStyle:(long long)arg2;
+ (id)_valueForCellSpecifier:(id)arg1;
+ (id)specifierWithStyle:(long long)arg1 account:(id)arg2 detailControllerClass:(Class)arg3 presentationStyle:(long long)arg4;
+ (id)specifierWithStyle:(long long)arg1 account:(id)arg2 target:(id)arg3 controllerLoadAction:(SEL)arg4;
+ (id)specifierWithStyle:(long long)arg1 account:(id)arg2 valueText:(id)arg3 detailControllerClass:(Class)arg4 presentationStyle:(long long)arg5;

- (void).cxx_destruct;
- (id)_dataclassesLabel;
- (id)_enabledDataclassesTextForWidth:(double)arg1;
- (id)_font;
- (id)_numberFormatter;
- (void)hideDataclass:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;

@end
