/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyAccessTokenOperation : BROperation {
    id /* block */  _shareCopyAccessTokenCompletionBlock;
    NSURL * _url;
}

@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setShareCopyAccessTokenCompletionBlock:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id /* block */)shareCopyAccessTokenCompletionBlock;
- (id)url;

@end
