/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMailboxUidEnumerator : NSEnumerator {
    unsigned long long  _index;
    NSMutableArray * _mailboxes;
}

- (void)dealloc;
- (id)initWithMailbox:(id)arg1;
- (id)nextObject;

@end
