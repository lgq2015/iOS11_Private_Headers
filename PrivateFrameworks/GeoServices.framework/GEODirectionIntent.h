/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionIntent : NSObject {
    GEOResolvedItem * _destination;
    GEOResolvedItem * _origin;
}

@property (nonatomic, readonly) GEOResolvedItem *destination;
@property (nonatomic, readonly) GEOResolvedItem *origin;

- (void).cxx_destruct;
- (id)destination;
- (id)initWithDirectionIntent:(id)arg1;
- (id)origin;

@end
