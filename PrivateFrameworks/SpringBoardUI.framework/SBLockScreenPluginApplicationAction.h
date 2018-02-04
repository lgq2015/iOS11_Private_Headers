/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction {
    NSString * _bundleID;
    unsigned long long  _transitionStyle;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) unsigned long long transitionStyle;
@property (setter=setURL:, nonatomic, retain) NSURL *url;

+ (id)actionWithBundleID:(id)arg1;
+ (id)actionWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isApplicationAction;
- (void)setBundleID:(id)arg1;
- (void)setTransitionStyle:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)transitionStyle;
- (id)url;

@end
