/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding> {
    HAPAccessory * _hapAccessory;
    NSNumber * _instanceID;
    long long  _linkType;
    NSString * _protocolVersion;
    bool  _reachable;
    NSString * _serverIdentifier;
}

@property (nonatomic, retain) HAPAccessory *hapAccessory;
@property (nonatomic, retain) NSNumber *instanceID;
@property long long linkType;
@property (nonatomic, retain) NSString *protocolVersion;
@property bool reachable;
@property (nonatomic, retain) NSString *serverIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hapAccessory;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPAccessory:(id)arg1;
- (id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3 reachable:(bool)arg4;
- (id)instanceID;
- (long long)linkType;
- (id)protocolVersion;
- (bool)reachable;
- (id)serverIdentifier;
- (void)setHapAccessory:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setServerIdentifier:(id)arg1;

@end
