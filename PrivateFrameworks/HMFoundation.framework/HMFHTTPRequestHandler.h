/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPRequestHandler : HMFObject {
    NSPredicate * _URLPredicate;
    id /* block */  _matchBlock;
    NSPredicate * _methodPredicate;
    id /* block */  _requestBlock;
}

@property (nonatomic, readonly, copy) NSPredicate *URLPredicate;
@property (nonatomic, readonly, copy) id /* block */ matchBlock;
@property (nonatomic, readonly, copy) NSPredicate *methodPredicate;
@property (nonatomic, copy) id /* block */ requestBlock;

+ (bool)_isValidMethodPrediate:(id)arg1;
+ (bool)_isValidURLPredicate:(id)arg1;

- (void).cxx_destruct;
- (id)URLPredicate;
- (id)init;
- (id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(id /* block */)arg3;
- (id /* block */)matchBlock;
- (id)methodPredicate;
- (id /* block */)requestBlock;
- (void)setRequestBlock:(id /* block */)arg1;

@end
