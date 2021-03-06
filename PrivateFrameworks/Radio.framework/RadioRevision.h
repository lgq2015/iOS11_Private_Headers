/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRevision : NSManagedObject

@property (nonatomic) long long revisionID;
@property (nonatomic) long long revisionType;
@property (nonatomic) long long stationID;

- (long long)revisionID;
- (long long)revisionType;
- (void)setRevisionID:(long long)arg1;
- (void)setRevisionType:(long long)arg1;
- (void)setStationID:(long long)arg1;
- (long long)stationID;

@end
