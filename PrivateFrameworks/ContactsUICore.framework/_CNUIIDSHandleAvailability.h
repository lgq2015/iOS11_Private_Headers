/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability> {
    bool  _available;
    <CNUIIDSHandle> * _handle;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUIIDSHandle> *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)handle;
- (id)initWithHandle:(id)arg1 available:(bool)arg2;
- (bool)isAvailable;

@end
