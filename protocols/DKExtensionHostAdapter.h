/* made by EzioChiu.
 */

@protocol DKExtensionHostAdapter <NSObject>

@required

- (void)cancelWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<DKExtensionHostAdapterDelegate> *)delegate;
- (void)setDelegate:(id <DKExtensionHostAdapterDelegate>)arg1;
- (void)startWithPayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
