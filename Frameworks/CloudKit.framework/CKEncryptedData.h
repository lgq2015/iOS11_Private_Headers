/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {
    NSData * _data;
    NSData * _encryptedData;
}

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *encryptedData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDecryption;
@property (nonatomic, readonly) bool needsEncryption;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithEncryptedData:(id)arg1;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsDecryption;
- (bool)needsEncryption;
- (void)setData:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (id)value;

@end
