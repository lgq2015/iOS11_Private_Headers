/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent

@property (nonatomic, retain) NSArray *impressionIdentifiers;

- (id)description;
- (id)impressionIdentifiers;
- (id)init;
- (void)setImpressionIdentifiers:(id)arg1;

@end
