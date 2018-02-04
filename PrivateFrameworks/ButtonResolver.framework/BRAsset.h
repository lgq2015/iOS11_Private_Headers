/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRAsset : NSObject {
    bool  _hasAudio;
    bool  _hasHaptic;
    bool  _isNull;
    NSDictionary * _parameters;
    long long  _type;
}

@property (nonatomic) bool hasAudio;
@property (nonatomic) bool hasHaptic;
@property (nonatomic, readonly) bool isNull;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) long long type;

+ (id)nullAsset;
+ (id)withType:(long long)arg1 andParameters:(id)arg2;

- (void)dealloc;
- (id)description;
- (bool)hasAudio;
- (bool)hasHaptic;
- (id)init;
- (id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNull;
- (id)parameters;
- (id)propertyList;
- (void)setHasAudio:(bool)arg1;
- (void)setHasHaptic:(bool)arg1;
- (long long)type;

@end
