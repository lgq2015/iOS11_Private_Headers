/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCheckArticleStatusOperation : FCOperation {
    NSString * _articleID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _checkStatusCompletion;
    FCCloudContext * _context;
    long long  _resultStatus;
}

@property (nonatomic, copy) NSString *articleID;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ checkStatusCompletion;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic) long long resultStatus;

- (void).cxx_destruct;
- (id)articleID;
- (id)callbackQueue;
- (id /* block */)checkStatusCompletion;
- (id)context;
- (id)initWithContext:(id)arg1 articleID:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (long long)resultStatus;
- (void)setArticleID:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCheckStatusCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setResultStatus:(long long)arg1;
- (bool)validateOperation;

@end
