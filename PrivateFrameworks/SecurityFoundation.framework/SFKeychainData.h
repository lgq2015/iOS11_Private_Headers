/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding> {
    id  _keychainDataInternal;
}

@property (nonatomic, retain) SFKeychainDataAttributes *attributes;
@property (readonly) NSData *data;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setAttributes:(id)arg1;

@end
