/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBonjourDevice : NSObject {
    unsigned char  _deviceIDBytes;
    NSDictionary * _deviceInfo;
    NSUUID * _identifier;
    NSString * _model;
    NSString * _name;
    NSString * _serviceType;
    NSData * _txtData;
    NSDictionary * _txtDictionary;
}

@property (nonatomic, copy) NSDictionary *deviceInfo;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSData *txtData;
@property (nonatomic, readonly, copy) NSDictionary *txtDictionary;

- (void).cxx_destruct;
- (void)_updateTXTDictionary:(id)arg1;
- (id)copyConnectionStringWithFlags:(unsigned long long)arg1 error:(id*)arg2;
- (id)description;
- (id)deviceInfo;
- (id)identifier;
- (id)model;
- (id)name;
- (id)serviceType;
- (void)setDeviceInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTxtData:(id)arg1;
- (id)shortDescription;
- (id)txtData;
- (id)txtDictionary;
- (unsigned int)updateWithBonjourDeviceInfo:(id)arg1;

@end
