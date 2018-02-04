/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell {
    bool  _parentMessageIsFromMe;
}

@property (nonatomic, retain) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) bool parentMessageIsFromMe;

- (id)balloonView;
- (void)configureForChatItem:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (bool)parentMessageIsFromMe;
- (void)performInsertion:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setBalloonView:(id)arg1;
- (void)setParentMessageIsFromMe:(bool)arg1;

@end
