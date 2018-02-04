/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying> {
    bool  _bootstrapScriptFallbackEnabled;
    double  _bootstrapScriptFallbackMaximumAge;
    double  _bootstrapScriptTimeoutInterval;
    bool  _pageRenderMetricsEnabled;
    bool  _requiresLocalBootstrapScript;
    bool  _supportsFullApplicationReload;
    long long  _tabBarControllerStyle;
    bool  _useTransientStorageForTests;
}

@property (getter=isBootstrapScriptFallbackEnabled, nonatomic, readonly) bool bootstrapScriptFallbackEnabled;
@property (nonatomic, readonly) double bootstrapScriptFallbackMaximumAge;
@property (nonatomic, readonly) double bootstrapScriptTimeoutInterval;
@property (nonatomic, readonly) bool pageRenderMetricsEnabled;
@property (nonatomic, readonly) bool requiresLocalBootstrapScript;
@property (nonatomic, readonly) bool supportsFullApplicationReload;
@property (nonatomic, readonly) long long tabBarControllerStyle;
@property (nonatomic, readonly) bool useTransientStorageForTests;

- (double)bootstrapScriptFallbackMaximumAge;
- (double)bootstrapScriptTimeoutInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isBootstrapScriptFallbackEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)pageRenderMetricsEnabled;
- (bool)requiresLocalBootstrapScript;
- (bool)supportsFullApplicationReload;
- (long long)tabBarControllerStyle;
- (bool)useTransientStorageForTests;

@end
