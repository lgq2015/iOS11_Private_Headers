/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest

@property (nonatomic, readonly, copy) ASDRestoreDemotedApplicationsRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end