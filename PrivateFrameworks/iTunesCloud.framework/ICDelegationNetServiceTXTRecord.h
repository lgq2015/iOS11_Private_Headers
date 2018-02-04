/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying> {
    NSArray * _delegationAccountUUIDs;
    NSString * _deviceName;
    long long  _securityMode;
    long long  _serviceVersion;
}

@property (nonatomic, readonly, copy) NSData *TXTRecordData;
@property (nonatomic, copy) NSArray *delegationAccountUUIDs;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long serviceVersion;

- (void).cxx_destruct;
- (id)TXTRecordData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegationAccountUUIDs;
- (id)deviceName;
- (unsigned long long)hash;
- (id)initWithTXTRecordData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)securityMode;
- (long long)serviceVersion;
- (void)setDelegationAccountUUIDs:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setServiceVersion:(long long)arg1;

@end
