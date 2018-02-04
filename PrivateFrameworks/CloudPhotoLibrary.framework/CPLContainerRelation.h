/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLContainerRelation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    bool  _keyAsset;
    long long  _position;
}

@property (nonatomic, copy) NSString *containerIdentifier;
@property (getter=isKeyAsset, nonatomic) bool keyAsset;
@property (nonatomic) long long position;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKeyAsset;
- (long long)position;
- (id)proposedIdentifierForItemIdentifier:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setKeyAsset:(bool)arg1;
- (void)setPosition:(long long)arg1;

@end
