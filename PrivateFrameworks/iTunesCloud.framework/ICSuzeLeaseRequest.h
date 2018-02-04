/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSuzeLeaseRequest : NSObject <NSCopying> {
    NSData * _clientData;
    NSString * _leaseID;
    long long  _mediaType;
    long long  _qualityOfService;
    ICStoreRequestContext * _requestContext;
    long long  _requestType;
}

@property (nonatomic, readonly, copy) NSData *clientData;
@property (nonatomic, readonly, copy) NSString *leaseID;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, readonly) long long requestType;

- (void).cxx_destruct;
- (id)clientData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestContext:(id)arg1 requestType:(long long)arg2 leaseID:(id)arg3 mediaType:(long long)arg4 clientData:(id)arg5;
- (id)leaseID;
- (long long)mediaType;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (id)requestContext;
- (long long)requestType;
- (void)setQualityOfService:(long long)arg1;

@end
