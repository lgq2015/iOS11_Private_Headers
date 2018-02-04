/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOJunction : NSObject <NSSecureCoding> {
    int  _drivingSide;
    NSData * _elementsData;
    int  _junctionType;
    int  _maneuverType;
}

@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*elements;
@property (nonatomic, readonly) int junctionType;
@property (nonatomic, readonly) int maneuverType;
@property (nonatomic, readonly) unsigned long long numElements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)drivingSide;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2;
- (id)initWithStep:(id)arg1;
- (int)junctionType;
- (int)maneuverType;
- (unsigned long long)numElements;

@end
