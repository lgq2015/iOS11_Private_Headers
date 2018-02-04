/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy

- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (bool)isDownloadAllowableForCellular;
- (bool)isPowerRequired;
- (unsigned long long)wifiOnlyPeriodInDays;

@end
