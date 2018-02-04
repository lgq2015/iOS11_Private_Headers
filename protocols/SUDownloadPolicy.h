/* made by EzioChiu.
 */

@protocol SUDownloadPolicy <NSObject>

@required

- (SUDescriptor *)descriptor;
- (bool)hasEnoughDiskSpace;
- (id)initWithDescriptor:(SUDescriptor *)arg1;
- (bool)isDownloadAllowableForCellular;
- (bool)isDownloadAllowableForCellular2G;
- (bool)isDownloadAllowableForCellularRoaming;
- (bool)isDownloadAllowableForWiFi;
- (bool)isDownloadFreeForCellular;
- (bool)isDownloadable;
- (bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2;
- (bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2 powerRequired:(bool*)arg3;
- (bool)isPowerRequired;
- (bool)isSamePolicy:(id <SUDownloadPolicy>)arg1;
- (void)setDescriptor:(SUDescriptor *)arg1;

@end
