/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailComposeAttachmentLoader : NSObject {
    id /* block */  _completionBlock;
    id  _content;
    bool  _didLoadBestAlternative;
    bool  _isDraft;
    MFMailMessage * _message;
}

- (void)dealloc;
- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(bool)arg3 didLoadBestAlternative:(bool)arg4 completion:(id /* block */)arg5;
- (void)loadAttachments;

@end
