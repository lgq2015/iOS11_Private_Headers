/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying> {
    NSMutableData * _mutableData;
}

@property (nonatomic, readonly) NSMutableData *mutableData;
@property (nonatomic, readonly) float*mutablePtr;

- (void).cxx_destruct;
- (void)append:(float)arg1;
- (void)append:(const float*)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMutableData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableData;
- (float*)mutablePtr;
- (void)processValuesInPlaceWithBlock:(id /* block */)arg1;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;

@end
