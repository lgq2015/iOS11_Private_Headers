/* made by EzioChiu
   Image: /Developer/usr/lib/libsysmon.dylib
 */

@interface OS_sysmon_row : OS_sysmon_object <OS_sysmon_row>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_dispose;

@end