/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaEndpoint : NSObject {
    NSArray * _advertisements;
    void * _endpoint;
    NSString * _localizedName;
    NSString * _sessionIdentifier;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSArray *advertisements;
@property (nonatomic, readonly) void*endpoint;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_getAdvertisements;
- (id)advertisements;
- (void)dealloc;
- (id)description;
- (void*)endpoint;
- (unsigned long long)hash;
- (id)initWithEndpoint:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)sessionIdentifier;
- (id)uniqueIdentifier;

@end
