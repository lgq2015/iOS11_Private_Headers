/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDNetworkContext : NSObject

+ (long long)cellDownloadCost:(id)arg1;
+ (bool)cellInterfaceUp:(id)arg1;
+ (long long)cellQuality:(id)arg1;
+ (long long)cellUploadCost:(id)arg1;
+ (id)connectionQualityKey;
+ (id)downloadPowerCostKey;
+ (bool)inexpensiveNetworkingAvailable:(id)arg1;
+ (id)interfaceUpKey;
+ (id)keyPathForCellConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForWiredConnectionStatus;
+ (id)loiKey;
+ (bool)networkingAvailable:(id)arg1;
+ (id)predictionKey;
+ (long long)qualityForPath:(id)arg1 inContext:(id)arg2;
+ (id)uploadPowerCostKey;
+ (long long)wifiQuality:(id)arg1;
+ (long long)wiredQuality:(id)arg1;

@end