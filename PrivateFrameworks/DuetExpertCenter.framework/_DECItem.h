/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECItem : NSObject <NSCopying, NSSecureCoding, _DECItemEquivalency> {
    NSUUID * _identifier;
    NSMutableDictionary * _metadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (readonly) Class superclass;

+ (unsigned long long)category;
+ (id)fromSearchResult:(id)arg1;
+ (bool)isSearchFoundationCompliant;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)metadata;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)toSearchResult;

@end
