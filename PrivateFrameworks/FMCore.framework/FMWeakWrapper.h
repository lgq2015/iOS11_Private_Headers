/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMWeakWrapper : NSObject <NSCopying> {
    id  _object;
    unsigned long long  _objectHash;
}

@property (nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (unsigned long long)objectHash;
- (void)setObject:(id)arg1;
- (void)setObjectHash:(unsigned long long)arg1;

@end
