/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyiWorkShareURLOperation : BROperation {
    NSString * _appName;
    CKShare * _share;
    id /* block */  _shareCopyURLCompletionBlock;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ shareCopyURLCompletionBlock;

+ (id)iWorkShareableExtensions;

- (void).cxx_destruct;
- (id)appName;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1 appName:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (void)main;
- (void)setAppName:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setShareCopyURLCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)shareCopyURLCompletionBlock;

@end
