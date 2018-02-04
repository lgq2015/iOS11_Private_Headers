/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUILocationServicesAuthLevelCell : PSTableCell {
    unsigned long long  _authLevel;
    NSURL * _bundleURL;
    bool  _isWebApp;
    LocationUsageMixin * _location;
}

@property (nonatomic, readonly) unsigned long long authLevel;
@property (nonatomic, readonly) LocationUsageMixin *location;

- (void).cxx_destruct;
- (unsigned long long)authLevel;
- (bool)canReload;
- (id)getLazyIcon;
- (id)getLazyIconID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)location;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
