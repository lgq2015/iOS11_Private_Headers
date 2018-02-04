/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAInvokeMessageHook : NSObject <AAUIServerHook, FAMessagesInviteControllerDelegate> {
    id /* block */  _completion;
    <AAUIServerHookDelegate> * _delegate;
    FAMessagesInviteConfigurationController * _messageConfigurationController;
    AAUIServerHookResponse * _serverHookResponse;
    FAMessagesInviteContext * _testContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentMessagesInviteWithServerAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)messageInviteController:(id)arg1 didFinishWithSuccess:(bool)arg2 error:(id)arg3;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
