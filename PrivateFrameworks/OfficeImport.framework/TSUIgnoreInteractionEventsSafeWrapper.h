/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUIgnoreInteractionEventsSafeWrapper : NSObject {
    id /* block */  _operationCompletionHandler;
    <TSUTraceableResourceToken> * _token;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)endIgnoringInteractionEventsSafely;
- (id)init;
- (id)initWithToken:(id)arg1;
- (void)resumeIgnoringInteractionEventsSafely;
- (void)suspendIgnoringInteractionEventsTemporarily;

@end
