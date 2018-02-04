/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardSectionFeedback : SFFeedback {
    <SFCardSection> * _cardSection;
    NSString * _cardSectionId;
    NSString * _resultId;
}

@property (nonatomic, retain) <SFCardSection> *cardSection;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSString *resultId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSection;
- (id)cardSectionId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultId;
- (void)setCardSection:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setResultId:(id)arg1;

@end
