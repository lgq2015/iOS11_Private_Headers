/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataAssistantCharacteristic : HMFObject {
    NSString * _format;
    NSString * _name;
    NSDictionary * _outValues;
    NSString * _readHAPCharacteristicName;
    bool  _supportsLocalization;
    NSDictionary * _values;
    NSString * _writeHAPCharacteristicName;
}

@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *outValues;
@property (nonatomic, retain) NSString *readHAPCharacteristicName;
@property (nonatomic) bool supportsLocalization;
@property (nonatomic, retain) NSDictionary *values;
@property (nonatomic, retain) NSString *writeHAPCharacteristicName;

- (void).cxx_destruct;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithName:(id)arg1 readHAPCharacteristic:(id)arg2 writeHAPCharacteristic:(id)arg3 format:(id)arg4;
- (id)name;
- (id)outValues;
- (id)readHAPCharacteristicName;
- (void)setFormat:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutValues:(id)arg1;
- (void)setReadHAPCharacteristicName:(id)arg1;
- (void)setSupportsLocalization:(bool)arg1;
- (void)setValues:(id)arg1;
- (void)setWriteHAPCharacteristicName:(id)arg1;
- (bool)supportsLocalization;
- (id)values;
- (id)writeHAPCharacteristicName;

@end
