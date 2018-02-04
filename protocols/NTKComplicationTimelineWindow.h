/* made by EzioChiu.
 */

@protocol NTKComplicationTimelineWindow <NSObject>

@required

- (unsigned long long)leftEntryCount;
- (NSDate *)leftmostContiguousEntryDate;
- (unsigned long long)rightEntryCount;
- (NSDate *)rightmostContiguousEntryDate;

@end
