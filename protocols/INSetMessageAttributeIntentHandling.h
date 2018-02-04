/* made by EzioChiu.
 */

@protocol INSetMessageAttributeIntentHandling <NSObject>

@required

- (void)handleSetMessageAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetMessageAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetMessageAttributeIntentResponse *, void*

@optional

- (void)confirmSetMessageAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetMessageAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetMessageAttributeIntentResponse *, void*
- (void)resolveAttributeForSetMessageAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetMessageAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INMessageAttributeResolutionResult *, void*

@end
