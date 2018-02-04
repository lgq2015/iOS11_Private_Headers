/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAIdentity : NSObject <NSCopying> {
    NSArray * _characteristics;
}

@property (nonatomic, copy) NSArray *characteristics;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)characteristics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)initWithCharacteristics:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isObject:(id)arg1 equalToObject:(id)arg2;
- (void)setCharacteristics:(id)arg1;

@end
