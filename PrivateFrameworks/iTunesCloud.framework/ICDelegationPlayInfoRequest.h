/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationPlayInfoRequest : NSObject <NSCopying> {
    NSData * _playerAnisetteMID;
    NSString * _playerDeviceGUID;
    NSArray * _tokenRequests;
}

@property (nonatomic, copy) NSData *playerAnisetteMID;
@property (nonatomic, copy) NSString *playerDeviceGUID;
@property (nonatomic, readonly, copy) NSMutableDictionary *propertyListRepresentation;
@property (nonatomic, copy) NSArray *tokenRequests;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)playerAnisetteMID;
- (id)playerDeviceGUID;
- (id)propertyListRepresentation;
- (void)setPlayerAnisetteMID:(id)arg1;
- (void)setPlayerDeviceGUID:(id)arg1;
- (void)setTokenRequests:(id)arg1;
- (id)tokenRequests;

@end
