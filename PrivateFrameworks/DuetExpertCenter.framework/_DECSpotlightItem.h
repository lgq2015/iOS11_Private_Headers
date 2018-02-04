/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSpotlightItem : _DECItem {
    long long  _domain;
    NSString * _itemIdentifier;
}

@property (nonatomic, readonly) long long domain;
@property (nonatomic, readonly) NSString *itemIdentifier;

+ (id)spotlightItemWithDomain:(long long)arg1 itemIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECSpotlightItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)domain;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(long long)arg1 itemIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)itemIdentifier;

@end
