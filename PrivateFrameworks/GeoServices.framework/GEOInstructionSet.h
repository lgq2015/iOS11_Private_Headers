/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOInstructionSet : PBCodable <NSCopying> {
    GEOFormattedString * _countStopsText;
    GEOFormattedString * _departureBar;
    GEODrivingWalkingInstruction * _drivingWalkingListInstruction;
    GEODrivingWalkingInstruction * _drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction * _drivingWalkingSpokenInstruction;
    GEOGenericInstruction * _genericInstruction;
    GEOTransitListInstruction * _transitListInstruction;
    GEOTransitSignInstruction * _transitSignInstruction;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *countStopsFormattedString;
@property (nonatomic, retain) GEOFormattedString *countStopsText;
@property (nonatomic, retain) GEOFormattedString *departureBar;
@property (nonatomic, readonly) <GEOServerFormattedString> *departureBarFormattedString;
@property (nonatomic, retain) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property (nonatomic, retain) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property (nonatomic, retain) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property (nonatomic, retain) GEOGenericInstruction *genericInstruction;
@property (nonatomic, readonly) bool hasCountStopsText;
@property (nonatomic, readonly) bool hasDepartureBar;
@property (nonatomic, readonly) bool hasDrivingWalkingListInstruction;
@property (nonatomic, readonly) bool hasDrivingWalkingSignInstruction;
@property (nonatomic, readonly) bool hasDrivingWalkingSpokenInstruction;
@property (nonatomic, readonly) bool hasGenericInstruction;
@property (nonatomic, readonly) bool hasTransitListInstruction;
@property (nonatomic, readonly) bool hasTransitSignInstruction;
@property (nonatomic, retain) GEOTransitListInstruction *transitListInstruction;
@property (nonatomic, retain) GEOTransitSignInstruction *transitSignInstruction;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countStopsFormattedString;
- (id)countStopsText;
- (id)departureBar;
- (id)departureBarFormattedString;
- (id)description;
- (id)dictionaryRepresentation;
- (id)drivingWalkingListInstruction;
- (id)drivingWalkingSignInstruction;
- (id)drivingWalkingSpokenInstruction;
- (id)genericInstruction;
- (bool)hasCountStopsText;
- (bool)hasDepartureBar;
- (bool)hasDrivingWalkingListInstruction;
- (bool)hasDrivingWalkingSignInstruction;
- (bool)hasDrivingWalkingSpokenInstruction;
- (bool)hasGenericInstruction;
- (bool)hasTransitListInstruction;
- (bool)hasTransitSignInstruction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountStopsText:(id)arg1;
- (void)setDepartureBar:(id)arg1;
- (void)setDrivingWalkingListInstruction:(id)arg1;
- (void)setDrivingWalkingSignInstruction:(id)arg1;
- (void)setDrivingWalkingSpokenInstruction:(id)arg1;
- (void)setGenericInstruction:(id)arg1;
- (void)setTransitListInstruction:(id)arg1;
- (void)setTransitSignInstruction:(id)arg1;
- (id)transitListInstruction;
- (id)transitSignInstruction;
- (void)writeTo:(id)arg1;

@end
