/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDEphemeralRequest : ASDRequest {
    id /* block */  _completionHandler;
    ASDRequestOptions * _options;
}

@property (copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) ASDRequestOptions *options;

+ (long long)requestType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callCompletionHandlerWithResponse:(id)arg1;
- (void)_failCompletionHandlerWithError:(id)arg1;
- (id)_initWithOptions:(id)arg1;
- (void)_startWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)receiveResponse:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
