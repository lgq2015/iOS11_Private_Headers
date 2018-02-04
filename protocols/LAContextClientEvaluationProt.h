/* made by EzioChiu.
 */

@protocol LAContextClientEvaluationProt

@required

- (void)evaluateACL:(void *)arg1 operation:(void *)arg2 options:(void *)arg3 uiDelegate:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSData *, long long, NSDictionary *, <LAUIDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)evaluatePolicy:(void *)arg1 options:(void *)arg2 uiDelegate:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: long long, NSDictionary *, <LAUIDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)isCredentialSet:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCredential:(void *)arg1 type:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
