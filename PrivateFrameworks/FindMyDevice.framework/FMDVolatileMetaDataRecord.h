/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDVolatileMetaDataRecord : NSObject <FMDDictionaryRepresentable, NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendMetaData:(id)arg1;
- (id)dictionary;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setDictionary:(id)arg1;

@end
