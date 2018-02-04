/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficIncidentFeature : VKTrafficFeature {
    NSString * _crossStreet;
    NSDate * _endDate;
    NSString * _info;
    bool  _isNotForDisplay;
    bool  _isOnSelectedRoute;
    NSDate * _lastUpdatedDate;
    unsigned int  _routeOffsetInMeters;
    long long  _routeRelevance;
    long long  _significance;
    NSDate * _startDate;
    NSString * _street;
    NSString * _subtitle;
    NSString * _title;
    long long  _type;
    unsigned long long  _uniqueID;
    NSString * _uniqueString;
}

@property (nonatomic, readonly) NSString *crossStreet;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *info;
@property (nonatomic, readonly) bool isNotForDisplay;
@property (nonatomic) bool isOnSelectedRoute;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic) unsigned int routeOffsetInMeters;
@property (nonatomic) long long routeRelevance;
@property (nonatomic, readonly) long long significance;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long uniqueID;
@property (nonatomic, readonly) NSString *uniqueString;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (void)dealloc;
- (id)endDate;
- (bool)hasSameIdentifier:(id)arg1;
- (id)info;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)arg1 worldPoint:(struct Matrix<double, 3, 1> { double x1[3]; }*)arg2;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2;
- (bool)isNotForDisplay;
- (bool)isOnSelectedRoute;
- (id)lastUpdatedDate;
- (unsigned int)routeOffsetInMeters;
- (long long)routeRelevance;
- (void)setIsOnSelectedRoute:(bool)arg1;
- (void)setRouteOffsetInMeters:(unsigned int)arg1;
- (void)setRouteRelevance:(long long)arg1;
- (long long)significance;
- (id)startDate;
- (id)street;
- (id)subtitle;
- (id)title;
- (long long)type;
- (unsigned long long)uniqueID;
- (id)uniqueString;

@end
