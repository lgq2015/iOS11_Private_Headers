/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicWriteRequestTuple : HMFObject {
    NSData * _authorizationData;
    HAPCharacteristic * _characteristic;
    NSNumber * _enableEvents;
    bool  _timedWrite;
    id  _value;
    bool  _writeResponse;
}

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) NSNumber *enableEvents;
@property (nonatomic) bool timedWrite;
@property (nonatomic, retain) id value;
@property (nonatomic) bool writeResponse;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(bool)arg4;

- (void).cxx_destruct;
- (id)authorizationData;
- (id)characteristic;
- (id)enableEvents;
- (void)setAuthorizationData:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setEnableEvents:(id)arg1;
- (void)setTimedWrite:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setWriteResponse:(bool)arg1;
- (bool)timedWrite;
- (id)value;
- (bool)writeResponse;

@end
