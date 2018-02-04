/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVPMetadataRange : NSObject <NSCopying> {
    NSDictionary * _analysisDict;
    int  _durationInFrames;
    unsigned long long  _flags;
    double  _score;
    int  _startTimeInFrames;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSDictionary *analysisDict;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) int durationInFrames;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) int startTimeInFrames;
@property (nonatomic, readonly) unsigned long long type;

+ (id)descriptionForFlags:(unsigned long long)arg1;
+ (id)descriptionForType:(unsigned long long)arg1;
+ (void)enumerateByAscendingTypes:(id)arg1 handler:(id /* block */)arg2;
+ (id)mergeRanges:(id)arg1 withRanges:(id)arg2;
+ (id)rangeWithType:(unsigned long long)arg1 flags:(unsigned long long)arg2 startTimeInFrames:(int)arg3 durationInFrames:(int)arg4 analysisDict:(id)arg5;

- (void).cxx_destruct;
- (void)_setScore:(double)arg1;
- (id)analysisDict;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (int)durationInFrames;
- (unsigned long long)flags;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)score;
- (int)startTimeInFrames;
- (unsigned long long)type;

@end
