/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSConnectionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _baseURL;
    NSString * _buildIdentifier;
    NSNumber * _familyMemberStoreID;
    NSString * _libraryBagKey;
    NSString * _purchaseClientIdentifier;
    long long  _requestReason;
    ICUserIdentity * _userIdentity;
    ICUserIdentityStore * _userIdentityStore;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSString *buildIdentifier;
@property (nonatomic, copy) NSNumber *familyMemberStoreID;
@property (nonatomic, copy) NSString *libraryBagKey;
@property (nonatomic, copy) NSString *purchaseClientIdentifier;
@property (nonatomic) long long requestReason;
@property (nonatomic, copy) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseURL;
- (id)buildIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)familyMemberStoreID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)libraryBagKey;
- (id)purchaseClientIdentifier;
- (long long)requestReason;
- (void)setBaseURL:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (void)setFamilyMemberStoreID:(id)arg1;
- (void)setLibraryBagKey:(id)arg1;
- (void)setPurchaseClientIdentifier:(id)arg1;
- (void)setRequestReason:(long long)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)userIdentity;
- (id)userIdentityStore;

@end
