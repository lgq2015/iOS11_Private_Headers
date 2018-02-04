/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQRequestProvider : NSObject {
    ACAccount * _account;
}

+ (void)addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
+ (bool)attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;

- (void).cxx_destruct;
- (void)addCommonHeadersToRequest:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)urlForQuotaKey:(id)arg1;

@end
