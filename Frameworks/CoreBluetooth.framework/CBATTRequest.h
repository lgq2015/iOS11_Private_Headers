/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBATTRequest : NSObject {
    CBCentral * _central;
    CBCharacteristic * _characteristic;
    bool  _ignoreResponse;
    unsigned long long  _offset;
    NSNumber * _transactionID;
    NSMutableData * _value;
}

@property (nonatomic, readonly) CBCentral *central;
@property (nonatomic, retain) CBCharacteristic *characteristic;
@property (nonatomic) bool ignoreResponse;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) NSNumber *transactionID;
@property (copy) NSData *value;

- (void).cxx_destruct;
- (void)appendValueData:(id)arg1;
- (id)central;
- (id)characteristic;
- (id)description;
- (unsigned long long)endOffset;
- (bool)ignoreResponse;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 transactionID:(id)arg4;
- (unsigned long long)offset;
- (void)setCharacteristic:(id)arg1;
- (void)setIgnoreResponse:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)transactionID;
- (id)value;

@end
