/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {
    unsigned long long  _businessID;
    NSArray * _componentIdentifiers;
    bool  _hasBusinessID;
    bool  _hasVenueID;
    NSArray * _originalIdentifiers;
    unsigned long long  _venueID;
}

@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) NSArray *componentIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hasBusinessID, nonatomic, readonly) bool hasBusinessID;
@property (getter=_hasVenueID, nonatomic, readonly) bool hasVenueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long venueID;

+ (unsigned long long)businessIDFromVenueIdentifiers:(id)arg1;
+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;
+ (unsigned long long)venueIdFromVenueIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasBusinessID;
- (bool)_hasVenueID;
- (unsigned long long)businessID;
- (id)componentIdentifiers;
- (id)initWithVenueID:(unsigned long long)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 componentIdentifiers:(id)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueIdentifiers:(id)arg1;
- (id)placeDataVenueIdentifier;
- (id)placeDataVenueIdentifierForVenue;
- (unsigned long long)venueID;

@end