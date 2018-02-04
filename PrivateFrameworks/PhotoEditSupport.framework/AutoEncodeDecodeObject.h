/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface AutoEncodeDecodeObject : NSObject <NSCopying> {
    NSArray * _keysToEncode;
}

@property (nonatomic, retain) NSArray *keysToEncode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getKeysToEncode;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToObject:(id)arg1;
- (id)keysToEncode;
- (void)setKeysToEncode:(id)arg1;

@end
