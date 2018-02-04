/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVACLTaskDelegate, CoreDAVPropFindTaskDelegate> {
    NSSet * _aceItems;
    CoreDAVPropFindTask * _fetchTask;
    int  _state;
    NSURL * _url;
}

@property (nonatomic, retain) NSSet *aceItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CoreDAVPropFindTask *fetchTask;
@property (readonly) unsigned long long hash;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startGetACL;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;
- (id)aceItems;
- (id)fetchTask;
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;
- (void)setAceItems:(id)arg1;
- (void)setFetchTask:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)url;

@end
