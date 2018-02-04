/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {
    id /* block */  _idQueryResultHandler;
    NSString * _listenerID;
    NSArray * _propertyItems;
    id /* block */  _requestResultBlock;
    NSString * _service;
}

@property (nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ idQueryResultHandler;
@property (nonatomic, retain) NSString *listenerID;
@property (nonatomic, retain) NSArray *propertyItems;
@property (copy) id /* block */ requestResultBlock;
@property (nonatomic, retain) NSString *service;
@property (readonly) Class superclass;

+ (id)sharedWorkQueue;

- (void).cxx_destruct;
- (void)_requestStatusOnMainQueue:(bool)arg1;
- (void)cancel;
- (bool)cancelled;
- (void)cleanupDelegate;
- (id /* block */)idQueryResultHandler;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(bool)arg3 resultBlock:(id /* block */)arg4;
- (id)listenerID;
- (id)propertyItems;
- (id /* block */)requestResultBlock;
- (id)service;
- (void)setIdQueryResultHandler:(id /* block */)arg1;
- (void)setListenerID:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setRequestResultBlock:(id /* block */)arg1;
- (void)setService:(id)arg1;

@end