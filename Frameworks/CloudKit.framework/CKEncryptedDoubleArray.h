/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedDoubleArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *doubleArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)doubleArray;
- (id)initWithDoubleArray:(id)arg1;
- (id)value;

@end
