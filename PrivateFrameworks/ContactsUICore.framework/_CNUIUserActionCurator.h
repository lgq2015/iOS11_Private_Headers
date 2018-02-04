/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator> {
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)contactStore;
- (id)curateUserAction:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (void)setApplicationWorkspace:(id)arg1;
- (void)setContactStore:(id)arg1;

@end
