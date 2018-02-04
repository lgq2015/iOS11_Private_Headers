/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue {
    unsigned long long  _suspendCount;
}

@property (nonatomic) unsigned long long suspendCount;

- (void)resume;
- (void)setSuspendCount:(unsigned long long)arg1;
- (void)suspend;
- (unsigned long long)suspendCount;

@end
