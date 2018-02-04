/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileInfoCell : PSTableCell

+ (float)desiredRowHeight;

- (id)_scriptingInfo;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDisplayName:(id)arg1 organization:(id)arg2;
- (void)setIsNearExpiration:(bool)arg1;

@end
