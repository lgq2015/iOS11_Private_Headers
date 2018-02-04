/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRSharingModifyRecordAccessOperation : BROperation {
    id /* block */  _accessAllowedCompletionBlock;
    bool  _allowAccess;
    id /* block */  _allowAccessCompletionBlock;
    NSURL * _fileURL;
}

@property (copy) id /* block */ accessAllowedCompletionBlock;
@property (copy) id /* block */ allowAccessCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)accessAllowedCompletionBlock;
- (id /* block */)allowAccessCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 allowAccess:(bool)arg2;
- (void)main;
- (void)setAccessAllowedCompletionBlock:(id /* block */)arg1;
- (void)setAllowAccessCompletionBlock:(id /* block */)arg1;

@end
