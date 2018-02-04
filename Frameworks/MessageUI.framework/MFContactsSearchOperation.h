/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchOperation : NSOperation {
    void * _addressBook;
    MFContactsSearchManager * _owner;
    NSOrderedSet * _properties;
    NSString * _sendingAddress;
    NSNumber * _taskID;
    NSString * _text;
}

@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, readonly) MFContactsSearchManager *owner;
@property (nonatomic, readonly) NSOrderedSet *properties;
@property (nonatomic, readonly) NSString *sendingAddress;
@property (nonatomic, readonly) NSNumber *taskID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long type;

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;

- (void*)addressBook;
- (void)dealloc;
- (id)owner;
- (id)properties;
- (id)sendingAddress;
- (id)taskID;
- (id)text;
- (unsigned long long)type;

@end
