/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCMoreDetailsController : PSListController {
    UIImage * _iconImage;
}

@property (nonatomic, retain) UIImage *iconImage;

- (void).cxx_destruct;
- (id)_specifierForPayload:(id)arg1;
- (id)iconImage;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)setIconImage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
