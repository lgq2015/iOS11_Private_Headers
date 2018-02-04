/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIServerUIHookHandler : NSObject <AAUIServerHookDelegate> {
    NSMutableArray * _hookIdentifiers;
    UIViewController * _presentingControllerOverride;
    RemoteUIController * _remoteUIController;
    NSArray * _serverHooks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presentingControllerOverride;
@property (nonatomic, copy) NSArray *serverHooks;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (void).cxx_destruct;
- (void)_rebuildServerHookHandlers;
- (id)_refreshRequestWithInfo:(id)arg1 initiatingObjectModel:(id)arg2 attributes:(id)arg3;
- (void)_reloadUIWithInfo:(id)arg1 attributes:(id)arg2 initiatingObjectModel:(id)arg3 completion:(id /* block */)arg4;
- (id)_responseDataForResult:(bool)arg1 withError:(id)arg2;
- (id)currentPresenter;
- (void)dismissObjectModelsAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithRemoteUIController:(id)arg1;
- (id)initWithRemoteUIController:(id)arg1 hooks:(id)arg2;
- (id)presentationContextForHook:(id)arg1;
- (id)presentingControllerOverride;
- (void)processObjectModel:(id)arg1 isModal:(bool)arg2;
- (void)processObjectModel:(id)arg1 isModal:(bool)arg2 completion:(id /* block */)arg3;
- (void)processServerResponse:(id)arg1;
- (void)refreshWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHooks;
- (void)setPresentingControllerOverride:(id)arg1;
- (void)setServerHooks:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

+ (id)fcui_defaultFresnoServerHooks;

@end
