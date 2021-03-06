/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (nonatomic, readonly, copy) ASDPurgeableAppRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
