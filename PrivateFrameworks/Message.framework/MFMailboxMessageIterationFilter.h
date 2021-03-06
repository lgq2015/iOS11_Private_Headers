/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {
    NSIndexSet * _mailboxes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (bool)filterMessageWithStatement:(struct sqlite3_stmt { }*)arg1;
- (id)initWithMailboxes:(id)arg1;

@end
