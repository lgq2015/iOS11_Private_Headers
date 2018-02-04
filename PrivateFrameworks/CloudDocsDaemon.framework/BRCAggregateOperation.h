/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSMutableDictionary * _resultDictionary;
    NSArray * _subOperations;
    id /* block */  _wrapperOperationCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ wrapperOperationCompletionHandler;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 subOperations:(id)arg2;
- (void)main;
- (void)setWrapperOperationCompletionHandler:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id /* block */)wrapperOperationCompletionHandler;

@end
