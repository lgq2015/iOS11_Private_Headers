/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUUtility : NSObject

+ (id)URLIfFileExists:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(long long)arg2;
+ (bool)alarmSetBeforeDate:(id)arg1;
+ (long long)appDemoteableSpace;
+ (bool)appDemotionIsEnabled;
+ (void)assignError:(id*)arg1 withCode:(long long)arg2;
+ (void)assignError:(id*)arg1 withError:(id)arg2 translate:(bool)arg3;
+ (long long)cacheDelete:(id)arg1;
+ (bool)cellularDataIsEnabled;
+ (id)currentProductBuild;
+ (id)currentProductCategory;
+ (id)currentProductType;
+ (id)currentProductVersion;
+ (id)currentReleaseType;
+ (long long)demoteApps:(unsigned long long)arg1 withError:(id*)arg2;
+ (unsigned long long)devicePadding:(id)arg1;
+ (void)enableAppDemotion:(bool)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 originalError:(id)arg2;
+ (bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2;
+ (bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(bool)arg3;
+ (bool)freeCachedSpaceSynchronous:(unsigned long long)arg1 timeout:(double)arg2 isAutoDownload:(bool)arg3 disableCDLevelFour:(bool)arg4 disableSiriDeletion:(bool)arg5 disableAppDemotion:(bool)arg6;
+ (id)gregorianCalendar;
+ (bool)hasCellularRadio;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(bool)arg4;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(bool)arg4 disableCDLevelFour:(bool)arg5 disableCDLevelThree:(bool)arg6 disableSiriDeletion:(bool)arg7 disableAppDemotion:(bool)arg8;
+ (bool)hasEnoughDiskSpace:(unsigned long long)arg1 growth:(unsigned long long)arg2 deltaSpaceNeeded:(unsigned long long*)arg3 isAutoDownload:(bool)arg4 includePurging:(bool)arg5;
+ (bool)isCellularDataCapable;
+ (bool)isDaemon;
+ (bool)isWiFiCapable;
+ (void)postFailureNotification:(id)arg1 body:(id)arg2 buttonText:(id)arg3 altButtonText:(id)arg4;
+ (id)prettyPrintDate:(id)arg1;
+ (id)serialNumber;
+ (void)setCacheable:(bool)arg1;
+ (void)setIsDaemon:(bool)arg1;
+ (id)systemContainerURL;
+ (id)taskQueue;
+ (unsigned long long)totalPurgeableSpace:(id)arg1;
+ (id)translateError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (long long)translateErrorCodeFromError:(id)arg1;

@end
