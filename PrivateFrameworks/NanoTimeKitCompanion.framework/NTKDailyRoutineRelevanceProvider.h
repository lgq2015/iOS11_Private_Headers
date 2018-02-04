/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDailyRoutineRelevanceProvider : NTKRelevanceProvider {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithDailyRoutineType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
