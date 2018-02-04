/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying> {
    NSMutableData * _data;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) const float*ptr;

+ (id)denseVectorFromNumbers:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)data;
- (float)density;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)arg1;
- (void)enumerateValuesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2;
- (id)initWithFloatsNoCopy:(float*)arg1 count:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithFloatsNoCopy:(float*)arg1 count:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (float)l2norm;
- (float)maxAbsValue;
- (float)maxValue;
- (float)minValue;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (const float*)ptr;
- (id)sliceFrom:(int)arg1 to:(int)arg2;
- (float)valueAt:(unsigned long long)arg1;
- (id)vecByAppendingVec:(id)arg1;

@end
