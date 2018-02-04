/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook> {
    NSString * _altDSID;
    NSString * _context;
    <AAUIServerHookDelegate> * delegate;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performHSAUpgradeWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)altDSID;
- (id)context;
- (id)delegate;
- (id)initWithAltDSID:(id)arg1 upgradeContext:(id)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setAltDSID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
