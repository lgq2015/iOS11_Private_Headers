/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReview : NSObject <SKUICacheCoding> {
    NSString * _body;
    NSString * _dateString;
    float  _rating;
    NSString * _reviewer;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (nonatomic, readonly) NSString *dateString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float rating;
@property (nonatomic, readonly) NSString *reviewer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)cacheRepresentation;
- (id)dateString;
- (id)formattedBylineWithClientContext:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithReviewDictionary:(id)arg1;
- (float)rating;
- (id)reviewer;
- (id)title;

@end
