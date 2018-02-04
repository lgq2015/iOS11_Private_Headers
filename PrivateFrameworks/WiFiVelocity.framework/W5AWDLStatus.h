/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5AWDLStatus : NSObject <NSCopying, NSSecureCoding> {
    long long  _airDropDiscoverableMode;
    NSData * _awdlElectionParameters;
    NSData * _awdlMasterChannel;
    NSData * _awdlOpMode;
    NSData * _awdlPeerDatabase;
    NSData * _awdlSecondaryMasterChannel;
    NSData * _awdlStrategy;
    NSData * _awdlSyncChannelSequence;
    NSData * _awdlSyncEnabled;
    NSData * _awdlSyncParameters;
    NSData * _awdlSyncState;
    NSString * _interfaceName;
    NSArray * _ipv6Addresses;
    bool  _isAWDLRealTimeMode;
    bool  _power;
}

@property (nonatomic) long long airDropDiscoverableMode;
@property (nonatomic, copy) NSData *awdlElectionParameters;
@property (nonatomic, copy) NSData *awdlMasterChannel;
@property (nonatomic, copy) NSData *awdlOpMode;
@property (nonatomic, copy) NSData *awdlPeerDatabase;
@property (nonatomic, copy) NSData *awdlSecondaryMasterChannel;
@property (nonatomic, copy) NSData *awdlStrategy;
@property (nonatomic, copy) NSData *awdlSyncChannelSequence;
@property (nonatomic, copy) NSData *awdlSyncEnabled;
@property (nonatomic, copy) NSData *awdlSyncParameters;
@property (nonatomic, copy) NSData *awdlSyncState;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSArray *ipv6Addresses;
@property (nonatomic) bool isAWDLRealTimeMode;
@property (nonatomic) bool power;

+ (bool)supportsSecureCoding;

- (long long)airDropDiscoverableMode;
- (id)awdlElectionParameters;
- (id)awdlMasterChannel;
- (id)awdlOpMode;
- (id)awdlPeerDatabase;
- (id)awdlSecondaryMasterChannel;
- (id)awdlStrategy;
- (id)awdlSyncChannelSequence;
- (id)awdlSyncEnabled;
- (id)awdlSyncParameters;
- (id)awdlSyncState;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (id)ipv6Addresses;
- (bool)isAWDLRealTimeMode;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAWDLStatus:(id)arg1;
- (bool)power;
- (void)setAirDropDiscoverableMode:(long long)arg1;
- (void)setAwdlElectionParameters:(id)arg1;
- (void)setAwdlMasterChannel:(id)arg1;
- (void)setAwdlOpMode:(id)arg1;
- (void)setAwdlPeerDatabase:(id)arg1;
- (void)setAwdlSecondaryMasterChannel:(id)arg1;
- (void)setAwdlStrategy:(id)arg1;
- (void)setAwdlSyncChannelSequence:(id)arg1;
- (void)setAwdlSyncEnabled:(id)arg1;
- (void)setAwdlSyncParameters:(id)arg1;
- (void)setAwdlSyncState:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpv6Addresses:(id)arg1;
- (void)setIsAWDLRealTimeMode:(bool)arg1;
- (void)setPower:(bool)arg1;

@end
