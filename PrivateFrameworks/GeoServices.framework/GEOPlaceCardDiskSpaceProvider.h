/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceCardDiskSpaceProvider : NSObject <GEODiskSpaceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (int)minimumUrgency;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;

@end
