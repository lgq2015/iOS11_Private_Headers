/* made by EzioChiu.
 */

@protocol _ATXLocationManagerWrapperProtocol

@required

- (void)clearLocationOfInterest;
- (void)fetchAllLocationsOfInterest:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (_ATXLocation *)locationOfInterestAtCurrentLocation;

@end
