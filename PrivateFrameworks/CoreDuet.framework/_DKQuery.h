/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKQuery : NSObject <NSSecureCoding>

+ (id)endDateSortDescriptorAscending:(bool)arg1;
+ (id)executableQueryForQuery:(id)arg1;
+ (id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2;
+ (id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithCategoryValue:(id)arg1;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1;
+ (id)predicateForEventsWithDoubleValue:(double)arg1;
+ (id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithIdentifierValue:(id)arg1;
+ (id)predicateForEventsWithIntegerValue:(long long)arg1;
+ (id)predicateForEventsWithNoSource;
+ (id)predicateForEventsWithQuantityValue:(id)arg1;
+ (id)predicateForEventsWithSourceDeviceIDs:(id)arg1;
+ (id)predicateForEventsWithSourceID:(id)arg1;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 groupIDs:(id)arg3;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 itemIDs:(id)arg3;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartDateAfter:(id)arg1;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStreamName:(id)arg1;
+ (id)predicateForEventsWithStreamNames:(id)arg1;
+ (id)predicateForEventsWithStringValue:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValue:(double)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValueBetween:(double)arg2 andValue:(double)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2;
+ (id)predicateForObjectsWithStructuredMetadataKey:(id)arg1 andValue:(id)arg2;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)queryNotExecutableError;
+ (id)startDateSortDescriptorAscending:(bool)arg1;
+ (id)structuredMetadataKeyPathForMetadataKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
