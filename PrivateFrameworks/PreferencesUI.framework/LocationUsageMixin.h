/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface LocationUsageMixin : NSObject {
    unsigned long long  _authLevel;
    NSString * _authLevelString;
    int  _usage;
    UIImageView * _usageIndicator;
}

@property (nonatomic) unsigned long long authLevel;
@property (nonatomic, readonly) NSString *authLevelString;
@property (nonatomic) int usage;
@property (nonatomic, readonly) UIImageView *usageIndicator;

- (void).cxx_destruct;
- (id)_authLevelForMask:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_authLevelLabelSize:(unsigned long long)arg1;
- (unsigned long long)authLevel;
- (id)authLevelString;
- (id)iconNameForUsage:(int)arg1;
- (id)init;
- (void)setAuthLevel:(unsigned long long)arg1;
- (void)setUsage:(int)arg1;
- (int)usage;
- (id)usageIndicator;
- (struct CGSize { double x1; double x2; })usageIndicatorSize;

@end
