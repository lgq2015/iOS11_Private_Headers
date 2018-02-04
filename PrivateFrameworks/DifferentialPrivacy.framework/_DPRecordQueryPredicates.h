/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPRecordQueryPredicates : NSObject

+ (id)entityForKey:(id)arg1;
+ (void)initialize;
+ (id)predicateForAllRecords;
+ (id)predicateForKey:(id)arg1;
+ (id)predicateForKey:(id)arg1 beginsWith:(bool)arg2 submitted:(bool)arg3 matchReportVersion:(bool)arg4;
+ (id)predicateForKeyBeginsWith:(id)arg1;
+ (id)predicateForRecordsInDateRangeStart:(id)arg1 end:(id)arg2;
+ (id)predicateForRecordsNotSubmitted;
+ (id)predicateForRecordsNotSubmittedForKey:(id)arg1;
+ (id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)arg1;
+ (id)predicateForRecordsOlderThan:(id)arg1;
+ (id)predicateForRecordsSubmitted;
+ (id)predicateForRecordsSubmittedForKey:(id)arg1;
+ (id)predicateForRecordsWithVersionMismatch;

@end
