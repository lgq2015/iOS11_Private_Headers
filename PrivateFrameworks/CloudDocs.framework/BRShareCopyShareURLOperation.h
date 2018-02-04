/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyShareURLOperation : BROperation {
    NSString * _appName;
    id /* block */  _copyShareURLCompletionBlock;
    NSError * _error;
    CKShare * _share;
    id /* block */  _shareCopyURLCompletionBlock;
}

@property (nonatomic, retain) NSString *appName;
@property (copy) id /* block */ copyShareURLCompletionBlock;
@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ shareCopyURLCompletionBlock;

- (void).cxx_destruct;
- (id)_initWithShare:(id)arg1 documentType:(id)arg2;
- (id)appName;
- (id /* block */)copyShareURLCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithFileURL:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (void)main;
- (void)setAppName:(id)arg1;
- (void)setCopyShareURLCompletionBlock:(id /* block */)arg1;
- (void)setShare:(id)arg1;
- (void)setShareCopyURLCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)shareCopyURLCompletionBlock;

@end
