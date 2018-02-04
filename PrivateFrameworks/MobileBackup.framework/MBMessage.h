/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBMessage : NSObject <NSKeyedArchiverDelegate> {
    NSMutableDictionary * _messageInfo;
    NSMutableDictionary * _replyInfo;
    NSObject<OS_xpc_object> * _xpcObject;
}

@property (nonatomic, readonly) NSArray *arguments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSObject<NSSecureCoding><NSCopying> *reply;
@property (nonatomic, copy) NSError *replyError;
@property (readonly) Class superclass;

+ (id)messageWithName:(id)arg1 arguments:(id)arg2;

- (id)_allowedClasses;
- (id)_initWithXPCObject:(id)arg1;
- (id)_xpcObject;
- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)arguments;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)name;
- (id)reply;
- (id)replyError;
- (void)sendReply;
- (void)setError:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setReplyError:(id)arg1;

@end
