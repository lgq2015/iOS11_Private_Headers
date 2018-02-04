/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding> {
    BSMutableSettings * _clientSettings;
}

@property (nonatomic) unsigned long long contentTypeMask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageScale;
@property (nonatomic) unsigned long long interfaceOrientationMask;
@property (nonatomic, copy) NSString *launchInterfaceIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, copy) NSString *requiredOSVersion;
@property (nonatomic, copy) NSString *scheme;
@property (nonatomic) unsigned long long statusBarState;
@property (nonatomic) unsigned long long statusBarStateMask;
@property (readonly) Class superclass;

+ (id)predicate;

- (void).cxx_destruct;
- (id)_clientObjectForKey:(unsigned long long)arg1;
- (bool)_hasClientObjectForKey:(unsigned long long)arg1;
- (void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2;
- (unsigned long long)contentTypeMask;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (double)imageScale;
- (id)init;
- (unsigned long long)interfaceOrientationMask;
- (bool)isFullScreen;
- (id)launchInterfaceIdentifier;
- (id)name;
- (struct CGSize { double x1; double x2; })referenceSize;
- (id)requiredOSVersion;
- (id)scheme;
- (void)setContentTypeMask:(unsigned long long)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setImageScale:(double)arg1;
- (void)setInterfaceOrientationMask:(unsigned long long)arg1;
- (void)setLaunchInterfaceIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequiredOSVersion:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setStatusBarState:(unsigned long long)arg1;
- (void)setStatusBarStateMask:(unsigned long long)arg1;
- (unsigned long long)statusBarState;
- (unsigned long long)statusBarStateMask;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
