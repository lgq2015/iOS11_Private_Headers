/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAction : NSObject <NSCopying, NSSecureCoding> {
    long long  _actionType;
    NSDictionary * _activatePluginContext;
    NSString * _activatePluginName;
    unsigned long long  _activationMode;
    BBAppearance * _appearance;
    bool  _authenticationRequired;
    long long  _behavior;
    NSDictionary * _behaviorParameters;
    bool  _deliverResponse;
    NSString * _identifier;
    id /* block */  _internalBlock;
    NSString * _launchBundleID;
    bool  _launchCanBypassPinLock;
    NSURL * _launchURL;
    NSString * _remoteServiceBundleIdentifier;
    NSString * _remoteViewControllerClassName;
    bool  _shouldDismissBulletin;
}

@property (nonatomic) long long actionType;
@property (nonatomic, copy) NSDictionary *activatePluginContext;
@property (nonatomic, copy) NSString *activatePluginName;
@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, copy) BBAppearance *appearance;
@property (getter=isAuthenticationRequired, nonatomic) bool authenticationRequired;
@property (nonatomic) long long behavior;
@property (nonatomic, copy) NSDictionary *behaviorParameters;
@property (nonatomic) bool canBypassPinLock;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ internalBlock;
@property (nonatomic, copy) NSString *launchBundleID;
@property (nonatomic) bool launchCanBypassPinLock;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, copy) NSString *remoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *remoteViewControllerClassName;
@property (nonatomic) bool shouldDismissBulletin;

+ (id)action;
+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithAppearance:(id)arg1;
+ (id)actionWithCallblock:(id /* block */)arg1;
+ (id)actionWithIdentifier:(id)arg1;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id /* block */)arg2;
+ (id)actionWithLaunchURL:(id)arg1;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_nameForActionType:(long long)arg1;
- (long long)actionType;
- (id)activatePluginContext;
- (id)activatePluginName;
- (unsigned long long)activationMode;
- (id)appearance;
- (id)awakeAfterUsingCoder:(id)arg1;
- (long long)behavior;
- (id)behaviorParameters;
- (id)bundleID;
- (bool)canBypassPinLock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverResponse:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasInteractiveAction;
- (bool)hasLaunchAction;
- (bool)hasPluginAction;
- (bool)hasRemoteViewAction;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id /* block */)internalBlock;
- (bool)isAuthenticationRequired;
- (bool)isEqual:(id)arg1;
- (id)launchBundleID;
- (bool)launchCanBypassPinLock;
- (id)launchURL;
- (id)partialDescription;
- (id)remoteServiceBundleIdentifier;
- (id)remoteViewControllerClassName;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setActivatePluginContext:(id)arg1;
- (void)setActivatePluginName:(id)arg1;
- (void)setActivationMode:(unsigned long long)arg1;
- (void)setAppearance:(id)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setBehavior:(long long)arg1;
- (void)setBehaviorParameters:(id)arg1;
- (void)setCallblock:(id /* block */)arg1;
- (void)setCanBypassPinLock:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalBlock:(id /* block */)arg1;
- (void)setLaunchBundleID:(id)arg1;
- (void)setLaunchCanBypassPinLock:(bool)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;
- (void)setShouldDismissBulletin:(bool)arg1;
- (bool)shouldDismissBulletin;
- (id)url;

@end
