/* made by EzioChiu.
 */

@protocol DKDiagnosticRemoteContext <NSObject>

@required

- (void)cancelRemoteDiagnosticWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startRemoteDiagnosticWithDiagnosticParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DKDiagnosticParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
