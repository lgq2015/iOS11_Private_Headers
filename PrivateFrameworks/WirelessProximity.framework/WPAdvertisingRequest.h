/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAdvertisingRequest : NSObject <NSCopying, NSSecureCoding> {
    NSData * _advertisingData;
    NSDictionary * _advertisingOptions;
    long long  _advertisingRate;
    unsigned char  _clientType;
    bool  _connectable;
    long long  _priorityValue;
    double  _updateTime;
}

@property (nonatomic, retain) NSData *advertisingData;
@property (retain) NSDictionary *advertisingOptions;
@property long long advertisingRate;
@property (nonatomic) unsigned char clientType;
@property bool connectable;
@property long long priorityValue;
@property double updateTime;

+ (id)requestForClientType:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisingData;
- (id)advertisingOptions;
- (long long)advertisingRate;
- (void)changePriorityValue:(long long)arg1;
- (unsigned char)clientType;
- (long long)compare:(id)arg1;
- (bool)connectable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)priorityValue;
- (void)setAdvertisingData:(id)arg1;
- (void)setAdvertisingOptions:(id)arg1;
- (void)setAdvertisingRate:(long long)arg1;
- (void)setClientType:(unsigned char)arg1;
- (void)setConnectable:(bool)arg1;
- (void)setPriorityValue:(long long)arg1;
- (void)setUpdateTime:(double)arg1;
- (double)updateTime;

@end
