/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainingOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAppLibrary * _appLibrary;
    unsigned long long  _batchSize;
    bool  _completed;
    id /* block */  _pcsChainCompletionBlock;
    BRCServerItem * _rootItem;
    bool  _shouldFillBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ pcsChainCompletionBlock;
@property (nonatomic) bool shouldFillBatch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildRecordListWithCompletion:(id /* block */)arg1;
- (void)_sendRecordBatch:(id)arg1 completion:(id /* block */)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithRootItem:(id)arg1 appLibrary:(id)arg2;
- (void)main;
- (id /* block */)pcsChainCompletionBlock;
- (void)setPcsChainCompletionBlock:(id /* block */)arg1;
- (void)setShouldFillBatch:(bool)arg1;
- (bool)shouldFillBatch;
- (bool)shouldRetryForError:(id)arg1;

@end
