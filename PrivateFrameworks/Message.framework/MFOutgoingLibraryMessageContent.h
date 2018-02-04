/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent {
    MFLibraryMessage * _libraryMessage;
}

@property (nonatomic, retain) MFLibraryMessage *libraryMessage;

- (id)copy;
- (void)dealloc;
- (id)headers;
- (id)libraryContent;
- (id)libraryMessage;
- (void)setLibraryMessage:(id)arg1;

@end
