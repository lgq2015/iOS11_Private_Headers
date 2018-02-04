/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKReference : NSObject <CKRecordValue, MSPCloudReference, NSCopying, NSSecureCoding> {
    CKRecordID * _recordID;
    unsigned long long  _referenceAction;
}

@property (nonatomic, readonly) NSString *cloudRecordName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CKRecordID *recordID;
@property (nonatomic, readonly) unsigned long long referenceAction;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)recordID;
- (unsigned long long)referenceAction;
- (void)setRecordID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)cloudRecordName;

@end
