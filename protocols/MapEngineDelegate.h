/* made by EzioChiu.
 */

@protocol MapEngineDelegate <NSObject>

@required

- (void)didPresent;
- (void)nearestVenueDidChange:(const struct Venue { unsigned long long x1; unsigned long long x2; struct vector<md::VenueBuilding, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_1_1; struct VenueBuilding {} *x_3_1_2; struct __compressed_pair<md::VenueBuilding *, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_2_1; } x_3_1_3; } x3; struct Polygon2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)arg1 building:(const struct VenueBuilding { struct vector<md::VenueLevel, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_1_1_1; struct VenueLevel {} *x_1_1_2; struct __compressed_pair<md::VenueLevel *, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; short x6; struct Matrix<double, 2, 1> { double x_7_1_1[2]; } x7; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; }*)arg2;
- (bool)wantsTimerTick;
- (void)willLayoutWithTimestamp:(double)arg1;

@end
