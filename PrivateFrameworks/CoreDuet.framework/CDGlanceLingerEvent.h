/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDGlanceLingerEvent : NSObject {
    NSString * _bundle;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (retain) NSString *bundle;
@property (retain) NSDate *endDate;
@property (retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)bundle;
- (id)description;
- (id)endDate;
- (void)setBundle:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
