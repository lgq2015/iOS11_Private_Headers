/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCleanSubitems : BROperation {
    id /* block */  _cleanSubitemsCompletionBlock;
    NSURL * _url;
}

@property (copy) id /* block */ cleanSubitemsCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)cleanSubitemsCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setCleanSubitemsCompletionBlock:(id /* block */)arg1;

@end
