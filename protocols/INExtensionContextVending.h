/* made by EzioChiu.
 */

@protocol INExtensionContextVending <NSObject>

@required

- (oneway void)beginTransactionWithIntentIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)completeTransactionWithIntentIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)confirmIntent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 10: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, NSSet *, NSError *, void*
- (oneway void)handleIntent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 10: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, NSSet *, NSError *, void*
- (oneway void)resolveIntentSlot:(void *)arg1 forIntent:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@optional

- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)completeTransaction;
- (oneway void)confirmationResponseForIntent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, void*
- (oneway void)getApplicationContextWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INApplicationContext *, void*
- (oneway void)handleIntent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, void*
- (oneway void)handleIntent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, NSError *, void*
- (oneway void)startSendingUpdatesForIntent:(INIntent *)arg1 toObserver:(id <INIntentResponseObserver>)arg2;
- (oneway void)stopSendingUpdatesForIntent:(INIntent *)arg1;

@end
