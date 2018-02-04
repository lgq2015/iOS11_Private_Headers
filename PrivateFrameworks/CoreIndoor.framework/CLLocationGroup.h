/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLLocationGroup : NSObject {
    ECEFCoordinate * _centerECEF;
    GeographicCoordinate * _centerLatLon;
    NSString * _groupId;
    long long  _locationContext;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__first_; 
        } __end_cap_; 
    }  _locationIds;
    double  _tolerance;
    struct polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> { 
        struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> { 
            struct point_xy<double, boost::geometry::cs::cartesian> {} *__begin_; 
            struct point_xy<double, boost::geometry::cs::cartesian> {} *__end_; 
            struct __compressed_pair<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> *, std::__1::allocator<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> > > { 
                struct point_xy<double, boost::geometry::cs::cartesian> {} *__first_; 
            } __end_cap_; 
        } m_outer; 
        struct vector<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator>, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { 
            struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *__begin_; 
            struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *__end_; 
            struct __compressed_pair<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> *, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { 
                struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *__first_; 
            } __end_cap_; 
        } m_inners; 
    }  _vertices;
    struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { 
        struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _wifiOnlyDownloadLocIdxs;
}

@property (readonly) ECEFCoordinate *centerECEF;
@property (readonly) GeographicCoordinate *centerLatLon;
@property (readonly) NSString *groupId;
@property (readonly) long long locationContext;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::basic_string<char>' */ struct  locationIds; /* unknown property attribute:  std::__1::allocator<char> >}}} */
@property (readonly) double tolerance;
@property /* Warning: unhandled struct encoding: '{polygon<boost::geometry::model::d2::point_xy<double' */ struct  vertices; /* unknown property attribute:  allocator>}}}} */
@property /* Warning: unhandled struct encoding: '{set<unsigned long' */ struct  wifiOnlyDownloadLocIdxs; /* unknown property attribute:  std::__1::less<unsigned long> >=Q}}} */

+ (id)average:(id)arg1;
+ (struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; } x3; })stringVectorFromNSArray:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allowCellularDownload:(unsigned long long)arg1;
- (id)centerECEF;
- (id)centerLatLon;
- (double)distance:(id)arg1;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })getGroupId;
- (const struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; } x3; }*)getLocationIds;
- (id)groupId;
- (id)init;
- (id)initWithGroupId:(id)arg1 locationIds:(id)arg2 vertices:(id)arg3 wifiOnlyDownloadLocIdxs:(const struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg4 locationContext:(long long)arg5 andTolerance:(double)arg6;
- (long long)locationContext;
- (struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x2; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_3_1_1; } x3; })locationIds;
- (void)setVertices:(struct polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_1; struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_2; struct __compressed_pair<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> *, std::__1::allocator<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> > > { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator>, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_1; struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_2; struct __compressed_pair<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> *, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_3_2_1; } x_2_1_3; } x2; })arg1;
- (void)setWifiOnlyDownloadLocIdxs:(struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (double)tolerance;
- (struct polygon<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, std::vector, std::vector, std::allocator, std::allocator> { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_1; struct point_xy<double, boost::geometry::cs::cartesian> {} *x_1_1_2; struct __compressed_pair<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> *, std::__1::allocator<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian> > > { struct point_xy<double, boost::geometry::cs::cartesian> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator>, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_1; struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_2_1_2; struct __compressed_pair<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> *, std::__1::allocator<boost::geometry::model::ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> > > { struct ring<boost::geometry::model::d2::point_xy<double, boost::geometry::cs::cartesian>, true, true, vector, allocator> {} *x_3_2_1; } x_2_1_3; } x2; })vertices;
- (struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })wifiOnlyDownloadLocIdxs;

@end
