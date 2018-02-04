/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSSet * _aceItems;
    NSDictionary * _attachments;
    NSSet * _attendeePrincipalURLs;
    bool  _attendeesCanManageDropBox;
    NSDictionary * _contentTypes;
    NSURL * _dropboxURL;
    NSDictionary * _putFailureSizes;
    NSMutableDictionary * _sentAttachmentURLsToETags;
    int  _state;
    CoreDAVUpdateACLTaskGroup * _updateACLTaskGroup;
}

@property (nonatomic, retain) NSSet *aceItems;
@property (nonatomic, retain) NSDictionary *attachments;
@property (nonatomic, retain) NSSet *attendeePrincipalURLs;
@property (nonatomic) bool attendeesCanManageDropBox;
@property (nonatomic, retain) NSDictionary *contentTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *dropboxURL;
@property (nonatomic, readonly, retain) NSDictionary *etags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *putFailureSizes;
@property (nonatomic, retain) NSMutableDictionary *sentAttachmentURLsToETags;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) CoreDAVUpdateACLTaskGroup *updateACLTaskGroup;

+ (id)dropboxACEItemsForPrincipalURLs:(id)arg1 baseURL:(id)arg2 writable:(bool)arg3;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_makeDropBox;
- (void)_sendAttachments;
- (void)_updateACLWithState:(int)arg1;
- (id)aceItems;
- (id)attachments;
- (id)attendeePrincipalURLs;
- (bool)attendeesCanManageDropBox;
- (id)contentTypes;
- (id)dropboxURL;
- (id)etags;
- (id)initWithAccountInfoProvider:(id)arg1 dropboxURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 attendeePrincipalURLs:(id)arg5 attendeesCanManageDropBox:(bool)arg6 taskManager:(id)arg7;
- (id)putFailureSizes;
- (id)sentAttachmentURLsToETags;
- (void)setAceItems:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendeePrincipalURLs:(id)arg1;
- (void)setAttendeesCanManageDropBox:(bool)arg1;
- (void)setContentTypes:(id)arg1;
- (void)setDropboxURL:(id)arg1;
- (void)setPutFailureSizes:(id)arg1;
- (void)setSentAttachmentURLsToETags:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUpdateACLTaskGroup:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (id)updateACLTaskGroup;

@end
