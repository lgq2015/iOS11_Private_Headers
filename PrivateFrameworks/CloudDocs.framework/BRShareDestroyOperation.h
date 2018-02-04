/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareDestroyOperation : BROperation {
    CKShare * _share;
    id /* block */  _shareDestroyCompletionBlock;
}

@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ shareDestroyCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setShareDestroyCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)shareDestroyCompletionBlock;

@end
