/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView {
    GKTextBubbleControl * _actionBubble;
    SEL  _bubbleAction;
    id  _bubbleTarget;
    NSLayoutConstraint * _bubbleToLastConstraint;
    bool  _compactHeight;
    GKLabel * _infoLabel;
    NSString * _infoText;
    GKLabel * _lastTurnLabel;
    GKTurnBasedMatch * _match;
    NSLayoutConstraint * _playingToTopConstraint;
    GKLabel * _playingWithLabel;
    GKLabel * _startedLabel;
}

@property (nonatomic, retain) GKTextBubbleControl *actionBubble;
@property (nonatomic) SEL bubbleAction;
@property (nonatomic) id bubbleTarget;
@property (nonatomic, retain) NSString *bubbleText;
@property (nonatomic) NSLayoutConstraint *bubbleToLastConstraint;
@property (nonatomic) long long bubbleType;
@property (nonatomic) bool compactHeight;
@property (nonatomic, retain) GKLabel *infoLabel;
@property (nonatomic, retain) NSString *infoText;
@property (nonatomic, retain) GKLabel *lastTurnLabel;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic) NSLayoutConstraint *playingToTopConstraint;
@property (nonatomic, retain) GKLabel *playingWithLabel;
@property (nonatomic, readonly) NSString *playingWithString;
@property (nonatomic, retain) GKLabel *startedLabel;

+ (bool)requiresConstraintBasedLayout;

- (id)actionBubble;
- (SEL)bubbleAction;
- (void)bubblePressed:(id)arg1;
- (id)bubbleTarget;
- (id)bubbleText;
- (id)bubbleToLastConstraint;
- (long long)bubbleType;
- (bool)compactHeight;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)infoLabel;
- (id)infoText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastTurnLabel;
- (id)match;
- (id)playingToTopConstraint;
- (id)playingWithLabel;
- (id)playingWithString;
- (void)setActionBubble:(id)arg1;
- (void)setBubbleAction:(SEL)arg1;
- (void)setBubbleTarget:(id)arg1;
- (void)setBubbleText:(id)arg1;
- (void)setBubbleToLastConstraint:(id)arg1;
- (void)setBubbleType:(long long)arg1;
- (void)setCompactHeight:(bool)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setLabelAlpha:(double)arg1;
- (void)setLastTurnLabel:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setPlayingToTopConstraint:(id)arg1;
- (void)setPlayingWithLabel:(id)arg1;
- (void)setStartedLabel:(id)arg1;
- (id)startedLabel;

@end
