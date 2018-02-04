/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadata : HMFObject {
    NSString * _hapBaseUUIDSuffix;
    NSDictionary * _hapCharacteristicMap;
    NSDictionary * _hapCharacteristicNameTypeMap;
    NSDictionary * _hapPropertyMap;
    NSDictionary * _hapServiceMap;
    NSDictionary * _hapServiceNameTypeMap;
    NSSet * _hapSupportsAuthDataSet;
    NSDictionary * _hapUnitMap;
    NSMutableArray * _parsedUUIDs;
    NSDictionary * _rawPlist;
    NSNumber * _schemaVersion;
    NSNumber * _version;
}

@property (nonatomic, retain) NSString *hapBaseUUIDSuffix;
@property (nonatomic, retain) NSDictionary *hapCharacteristicMap;
@property (nonatomic, retain) NSDictionary *hapCharacteristicNameTypeMap;
@property (nonatomic, readonly) NSArray *hapCharacteristics;
@property (nonatomic, readonly) NSArray *hapProperties;
@property (nonatomic, retain) NSDictionary *hapPropertyMap;
@property (nonatomic, retain) NSDictionary *hapServiceMap;
@property (nonatomic, retain) NSDictionary *hapServiceNameTypeMap;
@property (nonatomic, readonly) NSArray *hapServices;
@property (nonatomic, retain) NSSet *hapSupportsAuthDataSet;
@property (nonatomic, readonly) NSArray *hapSupportsAuthDataTuples;
@property (nonatomic, retain) NSDictionary *hapUnitMap;
@property (nonatomic, readonly) NSArray *hapValueUnits;
@property (nonatomic, retain) NSMutableArray *parsedUUIDs;
@property (nonatomic, readonly) NSDictionary *rawPlist;
@property (nonatomic, retain) NSNumber *schemaVersion;
@property (nonatomic, retain) NSNumber *version;

+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (void)setBuiltinInstanceWithDictionary:(id)arg1;
+ (bool)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;
+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;

- (void).cxx_destruct;
- (bool)allowAssociatedService:(id)arg1;
- (id)btleToServiceType:(id)arg1;
- (id)characteristicTypeFromUTI:(id)arg1;
- (id)characteristicUTIFromType:(id)arg1;
- (id)characteristicValueUnitOfType:(id)arg1;
- (id)descriptionFromCharacteristicType:(id)arg1;
- (id)descriptionFromServiceType:(id)arg1;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)getDefaultServiceProperties:(id)arg1;
- (id)hapBaseUUIDSuffix;
- (id)hapCharacteristicFromName:(id)arg1;
- (id)hapCharacteristicFromType:(id)arg1;
- (id)hapCharacteristicMap;
- (id)hapCharacteristicNameTypeMap;
- (id)hapCharacteristics;
- (id)hapProperties;
- (id)hapPropertyMap;
- (id)hapServiceFromName:(id)arg1;
- (id)hapServiceFromType:(id)arg1;
- (id)hapServiceMap;
- (id)hapServiceNameTypeMap;
- (id)hapServices;
- (id)hapSupportsAuthDataSet;
- (id)hapSupportsAuthDataTuples;
- (id)hapUnitFromName:(id)arg1;
- (id)hapUnitMap;
- (id)hapValueUnits;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;
- (bool)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (bool)isStandardHAPCharacteristic:(id)arg1;
- (bool)isStandardHAPCharacteristicName:(id)arg1;
- (bool)isStandardHAPService:(id)arg1;
- (bool)isStandardHAPServiceName:(id)arg1;
- (bool)isStandardHAPUnitName:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (bool)parseMetadata:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseUnits:(id)arg1;
- (bool)parseVersion:(id)arg1;
- (id)parsedUUIDs;
- (id)rawPlist;
- (id)schemaVersion;
- (id)serviceTypeFromUTI:(id)arg1;
- (id)serviceTypeToBTLE:(id)arg1;
- (id)serviceUTIFromType:(id)arg1;
- (void)setHapBaseUUIDSuffix:(id)arg1;
- (void)setHapCharacteristicMap:(id)arg1;
- (void)setHapCharacteristicNameTypeMap:(id)arg1;
- (void)setHapPropertyMap:(id)arg1;
- (void)setHapServiceMap:(id)arg1;
- (void)setHapServiceNameTypeMap:(id)arg1;
- (void)setHapSupportsAuthDataSet:(id)arg1;
- (void)setHapUnitMap:(id)arg1;
- (void)setParsedUUIDs:(id)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)shouldFilterServiceOfType:(id)arg1;
- (bool)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (bool)updateRawPlist;
- (bool)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;
- (id)version;

@end
