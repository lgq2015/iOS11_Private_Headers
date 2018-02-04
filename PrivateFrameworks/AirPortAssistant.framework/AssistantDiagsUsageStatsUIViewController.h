/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, TextLinkButtonDelegate, UINavigationControllerDelegate> {
    UIView * _linkContainerView;
    TextLinkButton * linkButton;
    id  previousNavDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *linkContainerView;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)handleTextLinkTap;
- (id)linkContainerView;
- (void)loadView;
- (void)setLinkContainerView:(id)arg1;
- (void)setUpInitialTableFooter;
- (void)touchInCellAtIndexPath:(id)arg1;

@end
