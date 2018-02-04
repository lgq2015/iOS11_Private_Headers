/* made by EzioChiu.
 */

@protocol SKUISettingsGroupsDescriptionDelegate <NSObject>

@required

- (UIViewController *)owningViewControllerForSettingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 deletedSettingAtIndexPath:(NSIndexPath *)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 didUpdateSettingsDescription:(SKUISettingsDescriptionUpdate *)arg2;
- (void)settingsGroupsDescription:(void *)arg1 dismissViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SKUISettingsGroupsDescription *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)settingsGroupsDescription:(void *)arg1 presentViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SKUISettingsGroupsDescription *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (SKUISettingDescriptionView *)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 viewForSettingAtIndexPath:(NSIndexPath *)arg2;
- (void)settingsGroupsDescriptionDidUpdateValidity:(SKUISettingsGroupsDescription *)arg1;

@end
