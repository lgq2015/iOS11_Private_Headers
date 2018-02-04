/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSDictionary * _payload;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *payload;
@property (nonatomic, readonly) long long type;

+ (void)deserializeCacheItem:(id)arg1 completion:(id /* block */)arg2;
+ (void)deserializeCacheItems:(id)arg1 completion:(id /* block */)arg2;
+ (void)serializeCacheableObjects:(id)arg1 completion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 payload:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)payload;
- (long long)type;

@end