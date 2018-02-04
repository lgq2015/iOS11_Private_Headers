/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface _RadioPlayEventStationInformation : NSObject {
    NSString * _stationHash;
    long long  _stationID;
}

@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (id)stationHash;
- (long long)stationID;

@end
