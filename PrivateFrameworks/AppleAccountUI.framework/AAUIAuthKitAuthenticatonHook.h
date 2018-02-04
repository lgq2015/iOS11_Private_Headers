/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAuthKitAuthenticatonHook : NSObject <AAUIServerHook> {
    NSString * _altDSID;
    NSString * _appleId;
    <AAUIServerHookDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reauthenticateWithServerAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)initWithUsername:(id)arg1 altDSID:(id)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
