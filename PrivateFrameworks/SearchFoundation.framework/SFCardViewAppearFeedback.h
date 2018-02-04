/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardViewAppearFeedback : SFFeedback <CRCardViewAppearanceFeedback> {
    SFCard * _card;
    NSString * _fbr;
    unsigned int  _level;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (nonatomic, retain) SFCard *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int level;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)card;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)level;
- (void)setCard:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setLevel:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
