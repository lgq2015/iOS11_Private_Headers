/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity

+ (long long)badgeCountForDomain:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (id)keyForNotificationDomain:(long long)arg1;
+ (id)modificationDateForNotificationDomain:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)setBadgeCount:(long long)arg1 forDomain:(long long)arg2 profile:(id)arg3 error:(id*)arg4;

@end
