/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITemplateLoader : NSObject {
    NSArray * _URLs;
    id /* block */  _completionBlock;
    NSMutableArray * _errors;
    NSOperationQueue * _operationQueue;
    long long  _pendingOperationCount;
    SKUITemplateLoader * _retainSelf;
    NSRegularExpression * _templateParsingRegularExpression;
    NSMutableDictionary * _templateStrings;
}

@property (nonatomic, readonly, copy) NSArray *URLs;
@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) NSMutableArray *errors;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) long long pendingOperationCount;
@property (nonatomic, readonly) NSRegularExpression *templateParsingRegularExpression;
@property (nonatomic, readonly) NSMutableDictionary *templateStrings;

- (void).cxx_destruct;
- (id)URLs;
- (void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2;
- (void)_operation:(id)arg1 didFailWithError:(id)arg2;
- (void)_operationDidFinish:(id)arg1;
- (id)_operationWithURL:(id)arg1;
- (id /* block */)completionBlock;
- (id)errors;
- (id)initWithURLs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)load;
- (id)operationQueue;
- (long long)pendingOperationCount;
- (void)setPendingOperationCount:(long long)arg1;
- (id)templateParsingRegularExpression;
- (id)templateStrings;

@end
