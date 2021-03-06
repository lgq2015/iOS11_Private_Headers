/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWidgetSectionConfigRecordSource : FCRecordSource

+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;

- (id)desiredKeys;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;

@end
