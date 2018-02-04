/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {
    UIView * justTextContainerView;
    UILabel * justTextLabel;
    PPPoEConnectionUIViewController * pppoeConnectionUIViewController;
    id  previousNavDelegate;
    UIView * tableHeaderContainerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain) PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tableHeaderContainerView;

- (void)dealloc;
- (id)justTextContainerView;
- (id)justTextLabel;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)pppoeConnectionUIViewController;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setPppoeConnectionUIViewController:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (id)tableHeaderContainerView;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;

@end
