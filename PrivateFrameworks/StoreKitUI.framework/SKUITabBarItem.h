/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITabBarItem : NSObject <NSCopying> {
    bool  _alwaysCreatesRootViewController;
    long long  _barTintStyle;
    UIViewController * _customRootViewController;
    NSString * _metricsIdentifier;
    NSURL * _rootURL;
    Class  _rootViewControllerClass;
    NSString * _tabIdentifier;
    UITabBarItem * _underlyingTabBarItem;
    UIColor * _userInterfaceTintColor;
}

@property (nonatomic) bool alwaysCreatesRootViewController;
@property (nonatomic) long long barTintStyle;
@property (nonatomic, retain) UIViewController *customRootViewController;
@property (nonatomic, copy) NSString *metricsIdentifier;
@property (nonatomic, copy) NSURL *rootURL;
@property (nonatomic, retain) Class rootViewControllerClass;
@property (nonatomic, readonly) NSString *tabIdentifier;
@property (nonatomic, retain) UITabBarItem *underlyingTabBarItem;
@property (nonatomic, retain) UIColor *userInterfaceTintColor;

- (void).cxx_destruct;
- (bool)alwaysCreatesRootViewController;
- (long long)barTintStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customRootViewController;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTabIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metricsIdentifier;
- (id)rootURL;
- (Class)rootViewControllerClass;
- (void)setAlwaysCreatesRootViewController:(bool)arg1;
- (void)setBarTintStyle:(long long)arg1;
- (void)setCustomRootViewController:(id)arg1;
- (void)setMetricsIdentifier:(id)arg1;
- (void)setRootURL:(id)arg1;
- (void)setRootViewControllerClass:(Class)arg1;
- (void)setUnderlyingTabBarItem:(id)arg1;
- (void)setUserInterfaceTintColor:(id)arg1;
- (id)tabIdentifier;
- (id)underlyingTabBarItem;
- (id)userInterfaceTintColor;

@end
