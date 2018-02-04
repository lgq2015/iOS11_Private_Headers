/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem> {
    <GEOVenueIdentifier> * _filterID;
    <GEOVenueLabel> * _label;
}

@property (nonatomic, readonly) <GEOVenueIdentifier> *filterID;
@property (nonatomic, readonly) <GEOVenueLabel> *label;

- (void).cxx_destruct;
- (id)filterID;
- (id)initWithFilterElementInfo:(id)arg1;
- (id)initWithLabel:(id)arg1 filterID:(id)arg2;
- (id)label;

@end
