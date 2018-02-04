/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate> {
    NAFuture * _softwareUpdateFetchFuture;
    HUSoftwareUpdateItemModuleController * _softwareUpdateModule;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic, retain) HUSoftwareUpdateItemModuleController *softwareUpdateModule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)init;
- (id)itemModuleControllers;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (void)setSoftwareUpdateModule:(id)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)softwareUpdateFetchFuture;
- (id)softwareUpdateModule;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
