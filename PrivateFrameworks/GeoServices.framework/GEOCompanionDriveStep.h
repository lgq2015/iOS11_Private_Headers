/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {
    int  _drivingSide;
    GEONameInfo * _exitNumber;
    struct { 
        unsigned int drivingSide : 1; 
        unsigned int junctionType : 1; 
        unsigned int maneuverType : 1; 
        unsigned int shieldType : 1; 
        unsigned int toFreeway : 1; 
    }  _has;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _junctionElements;
    unsigned long long  _junctionElementsCount;
    unsigned long long  _junctionElementsSpace;
    int  _junctionType;
    NSMutableArray * _maneuverNames;
    int  _maneuverType;
    NSString * _shield;
    int  _shieldType;
    NSMutableArray * _signposts;
    bool  _toFreeway;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int drivingSide;
@property (nonatomic, retain) GEONameInfo *exitNumber;
@property (nonatomic) bool hasDrivingSide;
@property (nonatomic, readonly) bool hasExitNumber;
@property (nonatomic) bool hasJunctionType;
@property (nonatomic) bool hasManeuverType;
@property (nonatomic, readonly) bool hasShield;
@property (nonatomic) bool hasShieldType;
@property (nonatomic) bool hasToFreeway;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*junctionElements;
@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic, retain) NSMutableArray *maneuverNames;
@property (nonatomic) int maneuverType;
@property (nonatomic, retain) NSString *shield;
@property (nonatomic) int shieldType;
@property (nonatomic, retain) NSMutableArray *signposts;
@property (readonly) Class superclass;
@property (nonatomic) bool toFreeway;
@property (nonatomic, readonly) int transportType;

+ (Class)maneuverNameType;
+ (Class)signpostType;

- (void).cxx_destruct;
- (int)StringAsDrivingSide:(id)arg1;
- (int)StringAsJunctionType:(id)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addManeuverName:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearJunctionElements;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)drivingSide;
- (id)drivingSideAsString:(int)arg1;
- (id)exitNumber;
- (bool)hasDrivingSide;
- (bool)hasExitNumber;
- (bool)hasJunctionType;
- (bool)hasManeuverType;
- (bool)hasShield;
- (bool)hasShieldType;
- (bool)hasToFreeway;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })junctionElementAtIndex:(unsigned long long)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (unsigned long long)junctionElementsCount;
- (int)junctionType;
- (id)junctionTypeAsString:(int)arg1;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (id)maneuverNames;
- (unsigned long long)maneuverNamesCount;
- (int)maneuverType;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDrivingSide:(int)arg1;
- (void)setExitNumber:(id)arg1;
- (void)setHasDrivingSide:(bool)arg1;
- (void)setHasJunctionType:(bool)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setHasShieldType:(bool)arg1;
- (void)setHasToFreeway:(bool)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setJunctionType:(int)arg1;
- (void)setManeuverNames:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setShield:(id)arg1;
- (void)setShieldType:(int)arg1;
- (void)setSignposts:(id)arg1;
- (void)setToFreeway:(bool)arg1;
- (id)shield;
- (int)shieldType;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (id)signposts;
- (unsigned long long)signpostsCount;
- (bool)toFreeway;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
