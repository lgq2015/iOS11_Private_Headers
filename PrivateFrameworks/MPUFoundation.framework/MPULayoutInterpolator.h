/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPULayoutInterpolator : NSObject <NSCopying> {
    struct vector<MPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> > { 
        struct EntriesContainer {} *__begin_; 
        struct EntriesContainer {} *__end_; 
        struct __compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> > { 
            struct EntriesContainer {} *__first_; 
        } __end_cap_; 
    }  _entriesContainers;
    bool  _hasEntryWithSpecificSecondaryReferenceMetric;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_interpolatedValueForPrimaryReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 betweenFirstEntriesContainer:(struct EntriesContainer { struct vector<MPU::LayoutInterpolator::Entry, std::__1::allocator<MPU::LayoutInterpolator::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<MPU::LayoutInterpolator::Entry *, std::__1::allocator<MPU::LayoutInterpolator::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; double x2; }*)arg3 andSecondEntriesContainer:(struct EntriesContainer { struct vector<MPU::LayoutInterpolator::Entry, std::__1::allocator<MPU::LayoutInterpolator::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<MPU::LayoutInterpolator::Entry *, std::__1::allocator<MPU::LayoutInterpolator::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; double x2; }*)arg4;
- (struct Point3D { double x1; double x2; double x3; })_pointForEntry:(struct Entry { double x1; double x2; })arg1 andPrimaryReferenceMetric:(double)arg2 usingFallbackSecondaryReferenceMetric:(double)arg3;
- (void)_sortPointsFor3DInterpolation:(struct vector<MPU::Point3D, std::__1::allocator<MPU::Point3D> > { struct Point3D {} *x1; struct Point3D {} *x2; struct __compressed_pair<MPU::Point3D *, std::__1::allocator<MPU::Point3D> > { struct Point3D {} *x_3_1_1; } x3; }*)arg1 usingQueriedPoint:(struct Point3D { double x1; double x2; double x3; })arg2;
- (struct vector<MPU::Point3D, std::__1::allocator<MPU::Point3D> > { struct Point3D {} *x1; struct Point3D {} *x2; struct __compressed_pair<MPU::Point3D *, std::__1::allocator<MPU::Point3D> > { struct Point3D {} *x_3_1_1; } x3; })_sortedPointsFor3DInterpolationFromEntriesContainer:(struct EntriesContainer { struct vector<MPU::LayoutInterpolator::Entry, std::__1::allocator<MPU::LayoutInterpolator::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<MPU::LayoutInterpolator::Entry *, std::__1::allocator<MPU::LayoutInterpolator::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; double x2; }*)arg1 usingQueriedPoint:(struct Point3D { double x1; double x2; double x3; })arg2 fallbackSecondaryReferenceMetric:(double)arg3;
- (void)addValue:(double)arg1 forReferenceMetric:(double)arg2;
- (void)addValue:(double)arg1 forReferenceMetric:(double)arg2 secondaryReferenceMetric:(double)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)valueForReferenceMetric:(double)arg1;
- (double)valueForReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2;

@end
