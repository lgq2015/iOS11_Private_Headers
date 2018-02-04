/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSuzeLeaseSessionConfiguration : NSObject <NSCopying> {
    id  _leaseID;
    long long  _mediaType;
    ICStoreRequestContext * _requestContext;
}

@property (nonatomic, readonly) id leaseID;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestContext:(id)arg1 leaseID:(id)arg2 mediaType:(long long)arg3;
- (id)leaseID;
- (long long)mediaType;
- (id)requestContext;

@end
