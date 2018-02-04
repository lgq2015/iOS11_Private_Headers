/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUDataSourceInvalidationContext : NSObject {
    bool  _invalidateDataSourceCounts;
    bool  _invalidateEverything;
}

@property (nonatomic, readonly) bool invalidateDataSourceCounts;
@property (nonatomic, readonly) bool invalidateEverything;

- (bool)invalidateDataSourceCounts;
- (bool)invalidateEverything;
- (void)setInvalidateDataSourceCounts:(bool)arg1;
- (void)setInvalidateEverything:(bool)arg1;

@end
