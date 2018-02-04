/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate> {
    NSDictionary * _dictionary;
    id /* block */  _resultBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ resultBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleFailure:(id)arg1 serverDialogDictionary:(id)arg2;
- (void)_logResultsForSuccess:(bool)arg1 failureReason:(id)arg2 failureMessage:(id)arg3 error:(id)arg4;
- (id)_subOperation;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)main;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (id /* block */)resultBlock;
- (void)setDictionary:(id)arg1;
- (void)setResultBlock:(id /* block */)arg1;

@end
