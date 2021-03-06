/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVApplicationControllerContext : NSObject <NSCopying> {
    NSURL * _appJSCachePath;
    NSURL * _appLocalJSURL;
    bool  _appUsesTabBarRootViewController;
    NSURL * _javaScriptApplicationURL;
    NSDictionary * _launchOptions;
    NSString * _storageIdentifier;
    bool  _supplementary;
}

@property (nonatomic, copy) NSURL *appJSCachePath;
@property (nonatomic, copy) NSURL *appLocalJSURL;
@property (nonatomic) bool appUsesTabBarRootViewController;
@property (nonatomic, copy) NSURL *javaScriptApplicationURL;
@property (nonatomic, copy) NSDictionary *launchOptions;
@property (nonatomic, copy) NSString *storageIdentifier;
@property (getter=isSupplementary, nonatomic) bool supplementary;

- (void).cxx_destruct;
- (id)appJSCachePath;
- (id)appLocalJSURL;
- (bool)appUsesTabBarRootViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isSupplementary;
- (id)javaScriptApplicationURL;
- (id)launchOptions;
- (void)setAppJSCachePath:(id)arg1;
- (void)setAppLocalJSURL:(id)arg1;
- (void)setAppUsesTabBarRootViewController:(bool)arg1;
- (void)setJavaScriptApplicationURL:(id)arg1;
- (void)setLaunchOptions:(id)arg1;
- (void)setStorageIdentifier:(id)arg1;
- (void)setSupplementary:(bool)arg1;
- (id)storageIdentifier;

@end
