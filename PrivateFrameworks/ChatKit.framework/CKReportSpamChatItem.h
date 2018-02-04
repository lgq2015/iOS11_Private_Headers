/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKReportSpamChatItem : CKStampChatItem {
    NSAttributedString * _transcriptButtonText;
}

@property (nonatomic, copy) NSAttributedString *transcriptButtonText;

- (void).cxx_destruct;
- (Class)cellClass;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setTranscriptButtonText:(id)arg1;
- (id)transcriptButtonText;
- (id)transcriptTextForSpam:(bool)arg1;

@end
