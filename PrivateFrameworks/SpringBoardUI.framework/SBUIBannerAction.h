/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerAction : NSObject {
    id /* block */  _actionBlock;
    unsigned long long  _activationMode;
    unsigned long long  _behavior;
    NSString * _identifier;
    NSDictionary * _parameters;
    NSString * _remoteServiceBundleIdentifier;
    NSString * _remoteViewControllerClassName;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) unsigned long long activationMode;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *remoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *remoteViewControllerClassName;

+ (id)actionWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (unsigned long long)activationMode;
- (unsigned long long)behavior;
- (id)identifier;
- (id)initWithActionBlock:(id /* block */)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(unsigned long long)arg5 behavior:(unsigned long long)arg6 parameters:(id)arg7;
- (id)parameters;
- (id)remoteServiceBundleIdentifier;
- (id)remoteViewControllerClassName;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;

@end
