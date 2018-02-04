/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAnimatedValue : NSObject <NSCopying> {
    unsigned long long  _interpolation;
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> >="__begin_"^{TimeSampledVtValue {}  _timeSampledData;
}

@property (nonatomic) unsigned long long interpolation;
@property (nonatomic, readonly) NSArray *keyTimes;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readonly) unsigned long long precision;
@property (nonatomic, readonly) unsigned long long timeSampleCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct aligned_storage_imp<8, 8> { union data_t { BOOL x_1_2_1[8]; struct a8 { } x_1_2_2; } x_1_1_1; } x1; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (unsigned long long)getTimes:(double*)arg1 maxCount:(unsigned long long)arg2;
- (id)init;
- (unsigned long long)interpolation;
- (bool)isAnimated;
- (id)keyTimes;
- (double)maximumTime;
- (double)minimumTime;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_2_1; } x_3_1_1; } x3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1 timeScale:(double)arg2;
- (void)setInterpolation:(unsigned long long)arg1;
- (unsigned long long)timeSampleCount;

@end
