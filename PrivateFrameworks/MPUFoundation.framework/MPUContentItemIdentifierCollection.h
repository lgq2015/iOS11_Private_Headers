/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMapTable * _identifierTypeToIdentifier;
    unsigned long long  _itemType;
}

@property (nonatomic, readonly) unsigned long long identifierCount;
@property (nonatomic, readonly) unsigned long long itemType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (void)_setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifierCount;
- (id)identifierForIdentifierType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
