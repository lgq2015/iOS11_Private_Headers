/* made by EzioChiu.
 */

@protocol CCSModuleSettingsProviderObserver <NSObject>

@required

- (void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(CCSModuleSettingsProvider *)arg1;

@end
