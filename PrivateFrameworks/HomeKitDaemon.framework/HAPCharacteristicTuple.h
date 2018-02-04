/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HAPCharacteristicTuple : HMFObject {
    HAPCharacteristic * _hapCharacteristic;
    long long  _linkType;
    NSString * _serverIdentifier;
}

@property (nonatomic, retain) HAPCharacteristic *hapCharacteristic;
@property long long linkType;
@property (nonatomic, retain) NSString *serverIdentifier;

- (void).cxx_destruct;
- (id)hapCharacteristic;
- (id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;
- (long long)linkType;
- (id)serverIdentifier;
- (void)setHapCharacteristic:(id)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setServerIdentifier:(id)arg1;

@end
