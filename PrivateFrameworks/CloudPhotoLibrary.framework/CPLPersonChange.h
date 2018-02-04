/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPersonChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    NSData * _contactDescriptor;
    NSString * _displayName;
    NSString * _fullName;
    long long  _manualSortOrder;
    NSString * _mergeTargetPersonIdentifier;
    long long  _personType;
    long long  _verifiedType;
}

@property (nonatomic, copy) NSData *contactDescriptor;
@property (nonatomic, copy) NSDictionary *contactMatchingDictionary;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) long long manualSortOrder;
@property (nonatomic, copy) NSString *mergeTargetPersonIdentifier;
@property (nonatomic) long long personType;
@property (nonatomic) long long verifiedType;

+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (bool)serverSupportsGraphPeopleHome;
+ (bool)serverSupportsMergeTargetRef;

- (void).cxx_destruct;
- (id)contactDescriptor;
- (id)contactMatchingDictionary;
- (id)displayName;
- (id)fullName;
- (long long)manualSortOrder;
- (id)mergeTargetPersonIdentifier;
- (long long)personType;
- (id)relatedIdentifier;
- (void)setContactDescriptor:(id)arg1;
- (void)setContactMatchingDictionary:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setManualSortOrder:(long long)arg1;
- (void)setMergeTargetPersonIdentifier:(id)arg1;
- (void)setPersonType:(long long)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setVerifiedType:(long long)arg1;
- (bool)supportsDeletion;
- (bool)supportsDirectDeletion;
- (bool)validateRecordForTracker:(id)arg1;
- (long long)verifiedType;

@end
