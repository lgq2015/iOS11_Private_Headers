/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent {
    NSString * _htmlBody;
}

@property (nonatomic, retain) NSString *htmlBody;

- (id)copy;
- (void)dealloc;
- (id)htmlBody;
- (id)multipartContent;
- (void)setHtmlBody:(id)arg1;

@end
