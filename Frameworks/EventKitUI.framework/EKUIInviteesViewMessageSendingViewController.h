/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewMessageSendingViewController : UIViewController <MFMailComposeViewControllerDelegate> {
    NSString * _body;
    EKEvent * _event;
    id /* block */  _messageSendingComplete;
    NSArray * _recipients;
    NSString * _subjectPrefix;
}

@property (retain) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ messageSendingComplete;
@property (retain) NSArray *recipients;
@property (retain) NSString *subjectPrefix;
@property (readonly) Class superclass;

+ (id)_attendeesIgnorningMe:(id)arg1;
+ (id)_recipientEmailAddressesToDisplayNames:(id)arg1 recipients:(id)arg2;
+ (bool)canShowForEvent:(id)arg1 withRecipients:(id)arg2;

- (void).cxx_destruct;
- (id)_htmlBodyForMailMessageWithNames:(id)arg1;
- (id)body;
- (id)event;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id /* block */)messageSendingComplete;
- (bool)prefersForcedModalShowViewController;
- (bool)prefersToBePresentedFromApplicationRootViewController;
- (id)recipients;
- (void)setBody:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setMessageSendingComplete:(id /* block */)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSubjectPrefix:(id)arg1;
- (id)subjectPrefix;

@end
