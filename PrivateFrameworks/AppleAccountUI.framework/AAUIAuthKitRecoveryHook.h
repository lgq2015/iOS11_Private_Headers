/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAuthKitRecoveryHook : NSObject <AAUIServerHook> {
    <AAUIServerHookDelegate> * _delegate;
    AKAppleIDServerUIDataHarvester * _serverDataHarvester;
    AAUIServerHookResponse * _serverHookResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (nonatomic, retain) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cdpStateUIProvider;
- (id)delegate;
- (void)harvestDataFromResponse:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverDataHarvester;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setServerDataHarvester:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
